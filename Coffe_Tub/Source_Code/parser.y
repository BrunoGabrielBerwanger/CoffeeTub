%code requires {
    typedef enum { T_CHAR, T_INT, T_FLOAT, T_ERR } Type;   /* ordem = "largura" */
    typedef struct { Type type; char *place; } Expr;       /* atributos sintetizados */
}

%code {
/* Coffee Tub - analisador sintático + semântico + tradução dirigida por sintaxe
 * Etapa 1: declarações, atribuições e expressões aritméticas.
 * Etapa 2: if/else (else obrigatório) e condições com os 6 operadores relacionais.
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
    Expr  ex;
}

%token <str> ID INT_LIT FLOAT_LIT CHAR_LIT
%token KW_INT KW_FLOAT KW_CHAR
%token IF ELSE SWITCH CASE DEFAULT BREAK WHILE     /* usados nas próximas etapas */
%token EQ NE GE LE                                  /* == != >= <= */

%type <type> type
%type <ex>   expr term factor cond
%type <str>  relop

%%

program   : stmt_list ;

stmt_list : %empty
          | stmt_list stmt ;

stmt      : decl
          | assign
          | if_stmt
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
