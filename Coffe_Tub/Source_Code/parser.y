%code requires {
    typedef enum { T_CHAR, T_INT, T_FLOAT, T_ERR } Type;   /* ordem = "largura" */
    typedef struct { Type type; char *place; } Expr;       /* atributos sintetizados */
    typedef struct { long val; char *text; } CaseVal;      /* constante de um case */
}

%code {
/* Coffee Tub - analisador sintático + semântico + tradução dirigida por sintaxe
 * Etapa 1: declarações, atribuições e expressões aritméticas.
 * Etapa 2: if/else (else obrigatório) e condições com os 6 operadores relacionais.
 * Etapa 3a: while.
 * Etapa 3b: switch/case/default e break (válido em while e switch).
 * Saída da tradução: código de três endereços (TAC). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

extern int yylineno;
int  yylex(void);
void yyerror(const char *msg);
void lex_error(const char *fmt, ...);

/* ---------- tabela de símbolos ---------- */
#define MAXSYM 512
typedef struct { char *name; Type type; } Sym;
static Sym symtab[MAXSYM];
static int nsym = 0;

static const char *tname(Type t) {
    switch (t) { case T_CHAR: return "char"; case T_INT: return "int";
                 case T_FLOAT: return "float"; default: return "?"; }
}
static int lookup(const char *name) {
    for (int i = 0; i < nsym; i++) if (!strcmp(symtab[i].name, name)) return i;
    return -1;
}

/* ---------- erros ---------- */
static int nerrors = 0;
static void semerr(const char *fmt, ...) {
    va_list ap; va_start(ap, fmt);
    fprintf(stderr, "Linha %d: erro semântico: ", yylineno);
    vfprintf(stderr, fmt, ap); fputc('\n', stderr);
    va_end(ap); nerrors++;
}
void lex_error(const char *fmt, ...) {
    va_list ap; va_start(ap, fmt);
    fprintf(stderr, "Linha %d: erro léxico: ", yylineno);
    vfprintf(stderr, fmt, ap); fputc('\n', stderr);
    va_end(ap); nerrors++;
}
void yyerror(const char *msg) {
    fprintf(stderr, "Linha %d: erro sintático: %s\n", yylineno, msg);
    nerrors++;
}

/* ---------- geração de código (buffer; só é impresso se não houver erros) ---------- */
static char outbuf[1 << 20];
static size_t outlen = 0;
static void emit(const char *fmt, ...) {
    va_list ap; va_start(ap, fmt);
    outlen += vsnprintf(outbuf + outlen, sizeof(outbuf) - outlen, fmt, ap);
    va_end(ap);
    if (outlen < sizeof(outbuf) - 1) outbuf[outlen++] = '\n';
    outbuf[outlen] = 0;
}
static int ntemp = 0;
static char *newtemp(void) {
    char buf[32]; snprintf(buf, sizeof buf, "t%d", ++ntemp); return strdup(buf);
}

/* ---------- ações semânticas ---------- */
static Type cur_type;   /* tipo da declaração em andamento */

static void declare(const char *name, Type t) {
    if (lookup(name) >= 0) { semerr("variável '%s' já foi declarada", name); return; }
    if (nsym >= MAXSYM)    { semerr("tabela de símbolos cheia"); return; }
    symtab[nsym].name = strdup(name); symtab[nsym].type = t; nsym++;
    emit("decl %s %s", tname(t), name);
}

static void assign_to(const char *name, Expr e) {
    int i = lookup(name);
    if (i < 0) { semerr("variável '%s' não foi declarada", name); return; }
    if (e.type == T_ERR) return;
    Type t = symtab[i].type;
    if (e.type > t) {           /* só aceita conversão "para cima": char -> int -> float */
        semerr("atribuição incompatível: '%s' é %s, mas a expressão é %s",
               name, tname(t), tname(e.type));
        return;
    }
    if (t == T_FLOAT && e.type != T_FLOAT) emit("%s = (float) %s", name, e.place);
    else                                   emit("%s = %s", name, e.place);
}

static Expr err_expr(void) { Expr r = { T_ERR, "?" }; return r; }

/* Promoção de tipos: char -> int -> float. Emite as conversões necessárias. */
static void unify(Expr *a, Expr *b, Type *rt) {
    Type ta = a->type == T_CHAR ? T_INT : a->type;
    Type tb = b->type == T_CHAR ? T_INT : b->type;
    *rt = (ta == T_FLOAT || tb == T_FLOAT) ? T_FLOAT : T_INT;
    if (*rt == T_FLOAT) {
        if (ta != T_FLOAT) { char *t = newtemp(); emit("%s = (float) %s", t, a->place); a->place = t; }
        if (tb != T_FLOAT) { char *t = newtemp(); emit("%s = (float) %s", t, b->place); b->place = t; }
    }
}

static Expr binop(const char *op, Expr a, Expr b) {
    if (a.type == T_ERR || b.type == T_ERR) return err_expr();
    Type rt; unify(&a, &b, &rt);
    char *r = newtemp();
    emit("%s = %s %s %s", r, a.place, op, b.place);
    Expr e = { rt, r };
    return e;
}

/* Condição: o resultado é um valor lógico (0/1), representado como int. */
static Expr relop(const char *op, Expr a, Expr b) {
    if (a.type == T_ERR || b.type == T_ERR) return err_expr();
    Type rt; unify(&a, &b, &rt);
    char *r = newtemp();
    emit("%s = %s %s %s", r, a.place, op, b.place);
    Expr e = { T_INT, r };
    return e;
}

static int nlabel = 0;
static int newlabel(void) { return ++nlabel; }

/* ---------- break: pilha de rótulos de saída (while e switch aninhados) ---------- */
typedef struct BrkNode { int label; struct BrkNode *prev; } BrkNode;
static BrkNode *brk_top = NULL;
static void push_break(int label) {
    BrkNode *n = malloc(sizeof *n); n->label = label; n->prev = brk_top; brk_top = n;
}
static void pop_break(void) { BrkNode *n = brk_top; brk_top = n->prev; free(n); }
static void do_break(void) {
    if (!brk_top) { semerr("'break' só pode ser usado dentro de while ou switch"); return; }
    emit("goto L%d", brk_top->label);
}

/* ---------- switch ----------
 * Estratégia (fall-through como no C): os corpos dos cases são emitidos em sequência,
 * cada um com seu rótulo; os testes ficam no fim, num bloco de despacho (Ltest). */
typedef struct SwCtx {
    int l_test, l_end, l_default;
    char *tmp;
    int n, cap;
    long *vals; char **texts; int *labels;
    struct SwCtx *prev;
} SwCtx;
static SwCtx *sw_top = NULL;

static long char_value(const char *t) {          /* t = 'a' ou '\n' etc. */
    if (t[1] == '\\') {
        switch (t[2]) { case 'n': return 10; case 't': return 9; case 'r': return 13;
                        case '0': return 0;  default: return (unsigned char)t[2]; }
    }
    return (unsigned char)t[1];
}

static void switch_begin(Expr e) {
    SwCtx *c = calloc(1, sizeof *c);
    c->l_test = newlabel(); c->l_end = newlabel(); c->l_default = -1;
    if (e.type == T_FLOAT) semerr("a expressão do switch deve ser int ou char, não float");
    c->tmp = newtemp();
    if (e.type != T_ERR) emit("%s = %s", c->tmp, e.place);
    emit("goto L%d", c->l_test);
    c->prev = sw_top; sw_top = c;
    push_break(c->l_end);
}

static void add_case(CaseVal v) {
    SwCtx *c = sw_top;
    int l = newlabel(); emit("L%d:", l);
    for (int i = 0; i < c->n; i++)
        if (c->vals[i] == v.val) { semerr("valor de 'case' duplicado: %s", v.text); return; }
    if (c->n == c->cap) {
        c->cap = c->cap ? 2 * c->cap : 8;
        c->vals   = realloc(c->vals,   c->cap * sizeof *c->vals);
        c->texts  = realloc(c->texts,  c->cap * sizeof *c->texts);
        c->labels = realloc(c->labels, c->cap * sizeof *c->labels);
    }
    c->vals[c->n] = v.val; c->texts[c->n] = v.text; c->labels[c->n] = l; c->n++;
}

static void add_default(void) {
    SwCtx *c = sw_top;
    int l = newlabel(); emit("L%d:", l);
    if (c->l_default >= 0) semerr("mais de um 'default' no mesmo switch");
    else c->l_default = l;
}

static void switch_end(void) {
    SwCtx *c = sw_top;
    emit("goto L%d", c->l_end);                   /* o último case "cai" para fora, sem passar pelos testes */
    emit("L%d:", c->l_test);
    for (int i = 0; i < c->n; i++) {
        char *t = newtemp();
        emit("%s = %s == %s", t, c->tmp, c->texts[i]);
        emit("if %s goto L%d", t, c->labels[i]);
    }
    emit("goto L%d", c->l_default >= 0 ? c->l_default : c->l_end);
    emit("L%d:", c->l_end);
    pop_break();
    sw_top = c->prev;
    free(c->vals); free(c->texts); free(c->labels); free(c);
}

static Expr neg(Expr a) {
    if (a.type == T_ERR) return a;
    char *r = newtemp();
    emit("%s = -%s", r, a.place);
    Expr e = { a.type == T_CHAR ? T_INT : a.type, r };
    return e;
}

static Expr var_ref(const char *name) {
    int i = lookup(name);
    if (i < 0) { semerr("variável '%s' não foi declarada", name); return err_expr(); }
    Expr e = { symtab[i].type, strdup(name) };
    return e;
}
}

%define parse.error verbose

%union {
    char *str;
    int   ival;
    Type  type;
    CaseVal cv;
    Expr  ex;
}

%token <str> ID INT_LIT FLOAT_LIT CHAR_LIT
%token KW_INT KW_FLOAT KW_CHAR
%token IF ELSE SWITCH CASE DEFAULT BREAK WHILE     /* usados nas próximas etapas */
%token EQ NE GE LE                                  /* == != >= <= */

%type <type> type
%type <ex>   expr term factor cond
%type <str>  relop
%type <cv>   case_const

%%

program   : stmt_list ;

stmt_list : %empty
          | stmt_list stmt ;

stmt      : decl
          | assign
          | if_stmt
          | while_stmt
          | switch_stmt
          | BREAK ';'                 { do_break(); }
          | '{' stmt_list '}'
          | error ';'                { yyerrok; }       /* recuperação: pula até o ';' */
          ;

/* ---- declarações: int a, b = 2; ---- */
decl      : type { cur_type = $1; } id_list ';' ;

type      : KW_INT   { $$ = T_INT; }
          | KW_FLOAT { $$ = T_FLOAT; }
          | KW_CHAR  { $$ = T_CHAR; }
          ;

id_list   : id_item
          | id_list ',' id_item ;

id_item   : ID            { declare($1, cur_type); }
          | ID '=' expr   { declare($1, cur_type); assign_to($1, $3); }
          ;

/* ---- atribuição ---- */
assign    : ID '=' expr ';'  { assign_to($1, $3); } ;

/* ---- if/else: o else é OBRIGATÓRIO (não existe regra de if sem else) ----
 * Como todo if tem else, a gramática não tem o problema do "else pendente". */
if_stmt   : IF '(' cond ')'
              { int l_else = newlabel();
                emit("ifFalse %s goto L%d", $3.place, l_else);
                $<ival>$ = l_else; }                                /* $5 */
            stmt
              { int l_end = newlabel();
                emit("goto L%d", l_end);
                emit("L%d:", $<ival>5);
                $<ival>$ = l_end; }                                 /* $7 */
            ELSE stmt
              { emit("L%d:", $<ival>7); }
          ;

/* ---- while: o rótulo de início vem ANTES da condição (ela é reavaliada a cada volta) ---- */
while_stmt : WHILE
               { int l_begin = newlabel();
                 emit("L%d:", l_begin);
                 $<ival>$ = l_begin; }                              /* $2 */
             '(' cond ')'
               { int l_end = newlabel();
                 emit("ifFalse %s goto L%d", $4.place, l_end);
                 push_break(l_end);
                 $<ival>$ = l_end; }                                /* $6 */
             stmt
               { emit("goto L%d", $<ival>2);
                 emit("L%d:", $<ival>6);
                 pop_break(); }
           ;

/* ---- switch: casos unitários ou empilhados (case 1: case 2: ...), default opcional ---- */
switch_stmt : SWITCH '(' expr ')'  { switch_begin($3); }
              '{' case_list '}'    { switch_end(); }
            ;

case_list : %empty
          | case_list case_item ;

case_item : CASE case_const ':'  { add_case($2); }   stmt_list
          | DEFAULT ':'          { add_default(); }  stmt_list
          ;

case_const : INT_LIT      { $$.val = atol($1);       $$.text = $1; }
           | '-' INT_LIT  { $$.val = -atol($2);
                            $$.text = malloc(strlen($2) + 2);
                            sprintf($$.text, "-%s", $2); }
           | CHAR_LIT     { $$.val = char_value($1); $$.text = $1; }
           ;

/* ---- condição: expr op_relacional expr ---- */
cond      : expr relop expr  { $$ = relop($2, $1, $3); } ;

relop     : EQ  { $$ = "=="; }
          | NE  { $$ = "!="; }
          | '>' { $$ = ">";  }
          | '<' { $$ = "<";  }
          | GE  { $$ = ">="; }
          | LE  { $$ = "<="; }
          ;

/* ---- expressões: precedência/associatividade pela própria estrutura ---- */
expr      : expr '+' term    { $$ = binop("+", $1, $3); }
          | expr '-' term    { $$ = binop("-", $1, $3); }
          | term             { $$ = $1; }
          ;

term      : term '*' factor  { $$ = binop("*", $1, $3); }
          | term '/' factor  { $$ = binop("/", $1, $3); }
          | factor           { $$ = $1; }
          ;

factor    : '(' expr ')'     { $$ = $2; }
          | '-' factor       { $$ = neg($2); }
          | ID               { $$ = var_ref($1); }
          | INT_LIT          { $$.type = T_INT;   $$.place = $1; }
          | FLOAT_LIT        { $$.type = T_FLOAT; $$.place = $1; }
          | CHAR_LIT         { $$.type = T_CHAR;  $$.place = $1; }
          ;

%%

int main(int argc, char **argv) {
    if (argc > 1 && !freopen(argv[1], "r", stdin)) { perror(argv[1]); return 2; }
    yyparse();
    if (nerrors) {
        fprintf(stderr, "\nCompilação falhou: %d erro(s).\n", nerrors);
        return 1;
    }
    printf("=== Código de três endereços ===\n%s", outbuf);
    printf("\n=== Tabela de símbolos ===\n");
    for (int i = 0; i < nsym; i++) printf("%-4s %s\n", tname(symtab[i].type), symtab[i].name);
    return 0;
}
