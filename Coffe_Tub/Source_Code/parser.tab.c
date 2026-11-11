/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1





# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_INT_LIT = 4,                    /* INT_LIT  */
  YYSYMBOL_FLOAT_LIT = 5,                  /* FLOAT_LIT  */
  YYSYMBOL_CHAR_LIT = 6,                   /* CHAR_LIT  */
  YYSYMBOL_KW_INT = 7,                     /* KW_INT  */
  YYSYMBOL_KW_FLOAT = 8,                   /* KW_FLOAT  */
  YYSYMBOL_KW_CHAR = 9,                    /* KW_CHAR  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_SWITCH = 12,                    /* SWITCH  */
  YYSYMBOL_CASE = 13,                      /* CASE  */
  YYSYMBOL_DEFAULT = 14,                   /* DEFAULT  */
  YYSYMBOL_BREAK = 15,                     /* BREAK  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_EQ = 17,                        /* EQ  */
  YYSYMBOL_NE = 18,                        /* NE  */
  YYSYMBOL_GE = 19,                        /* GE  */
  YYSYMBOL_LE = 20,                        /* LE  */
  YYSYMBOL_21_ = 21,                       /* ';'  */
  YYSYMBOL_22_ = 22,                       /* '{'  */
  YYSYMBOL_23_ = 23,                       /* '}'  */
  YYSYMBOL_24_ = 24,                       /* ','  */
  YYSYMBOL_25_ = 25,                       /* '='  */
  YYSYMBOL_26_ = 26,                       /* '('  */
  YYSYMBOL_27_ = 27,                       /* ')'  */
  YYSYMBOL_28_ = 28,                       /* ':'  */
  YYSYMBOL_29_ = 29,                       /* '-'  */
  YYSYMBOL_30_ = 30,                       /* '>'  */
  YYSYMBOL_31_ = 31,                       /* '<'  */
  YYSYMBOL_32_ = 32,                       /* '+'  */
  YYSYMBOL_33_ = 33,                       /* '*'  */
  YYSYMBOL_34_ = 34,                       /* '/'  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_program = 36,                   /* program  */
  YYSYMBOL_stmt_list = 37,                 /* stmt_list  */
  YYSYMBOL_stmt = 38,                      /* stmt  */
  YYSYMBOL_decl = 39,                      /* decl  */
  YYSYMBOL_40_1 = 40,                      /* $@1  */
  YYSYMBOL_type = 41,                      /* type  */
  YYSYMBOL_id_list = 42,                   /* id_list  */
  YYSYMBOL_id_item = 43,                   /* id_item  */
  YYSYMBOL_assign = 44,                    /* assign  */
  YYSYMBOL_if_stmt = 45,                   /* if_stmt  */
  YYSYMBOL_46_2 = 46,                      /* @2  */
  YYSYMBOL_47_3 = 47,                      /* @3  */
  YYSYMBOL_while_stmt = 48,                /* while_stmt  */
  YYSYMBOL_49_4 = 49,                      /* @4  */
  YYSYMBOL_50_5 = 50,                      /* @5  */
  YYSYMBOL_switch_stmt = 51,               /* switch_stmt  */
  YYSYMBOL_52_6 = 52,                      /* $@6  */
  YYSYMBOL_case_list = 53,                 /* case_list  */
  YYSYMBOL_case_item = 54,                 /* case_item  */
  YYSYMBOL_55_7 = 55,                      /* $@7  */
  YYSYMBOL_56_8 = 56,                      /* $@8  */
  YYSYMBOL_case_const = 57,                /* case_const  */
  YYSYMBOL_cond = 58,                      /* cond  */
  YYSYMBOL_relop = 59,                     /* relop  */
  YYSYMBOL_expr = 60,                      /* expr  */
  YYSYMBOL_term = 61,                      /* term  */
  YYSYMBOL_factor = 62                     /* factor  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 7 "parser.y"

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

#line 387 "parser.tab.c"

#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   136

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  100

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   275


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      26,    27,    33,    32,    24,    29,     2,    34,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    28,    21,
      31,    25,    30,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    22,     2,    23,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   250,   250,   252,   253,   255,   256,   257,   258,   259,
     260,   261,   262,   266,   266,   268,   269,   270,   273,   274,
     276,   277,   281,   286,   290,   285,   300,   304,   299,   315,
     315,   319,   320,   322,   322,   323,   323,   326,   327,   330,
     334,   336,   337,   338,   339,   340,   341,   345,   346,   347,
     350,   351,   352,   355,   356,   357,   358,   359,   360
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "INT_LIT",
  "FLOAT_LIT", "CHAR_LIT", "KW_INT", "KW_FLOAT", "KW_CHAR", "IF", "ELSE",
  "SWITCH", "CASE", "DEFAULT", "BREAK", "WHILE", "EQ", "NE", "GE", "LE",
  "';'", "'{'", "'}'", "','", "'='", "'('", "')'", "':'", "'-'", "'>'",
  "'<'", "'+'", "'*'", "'/'", "$accept", "program", "stmt_list", "stmt",
  "decl", "$@1", "type", "id_list", "id_item", "assign", "if_stmt", "@2",
  "@3", "while_stmt", "@4", "@5", "switch_stmt", "$@6", "case_list",
  "case_item", "$@7", "$@8", "case_const", "cond", "relop", "expr", "term",
  "factor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-22)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-37)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -22,     2,    13,   -22,   -12,   -14,   -22,   -22,   -22,    -9,
      -2,     5,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,     1,     1,     1,   -22,     8,    78,    40,   -22,
     -22,   -22,   -22,     1,     1,   100,    58,   -22,    21,    96,
      46,     1,   -22,    29,    -6,   -22,   104,   -22,   -22,     1,
       1,     1,     1,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
       1,   -22,    31,     1,   -22,    40,   -22,    58,    58,   -22,
     -22,    95,    42,    34,   -22,    42,   -22,   -22,   -22,    95,
      61,    18,   -22,    95,     4,    52,   -22,   -22,   -22,   -22,
     -22,    85,    67,   -22,   -22,   -22,   -22,   -22,    37,    54
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     1,     0,     0,    15,    16,    17,     0,
       0,     0,    26,     3,     4,     5,    13,     6,     7,     8,
       9,    12,     0,     0,     0,    10,     0,     0,     0,    55,
      56,    57,    58,     0,     0,     0,    49,    52,     0,     0,
       0,     0,    11,    20,     0,    18,     0,    54,    22,     0,
       0,     0,     0,    23,    41,    42,    45,    46,    43,    44,
       0,    29,     0,     0,    14,     0,    53,    48,    47,    50,
      51,     0,    40,     0,    27,    21,    19,    24,    31,     0,
       0,     0,    28,     0,     0,     0,    30,    32,    25,    37,
      39,     0,     0,    35,    38,    33,     3,     3,     0,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -22,   -22,   -13,    41,   -22,   -22,   -22,   -22,     0,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,    56,   -22,   -21,    59,   -15
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    14,    15,    28,    16,    44,    45,    17,
      18,    71,    80,    19,    26,    79,    20,    73,    81,    87,
      97,    96,    92,    38,    60,    39,    36,    37
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      27,    35,     3,    40,    29,    30,    31,    32,    89,    21,
      90,    22,    46,    -2,     4,    64,     5,    23,    65,    47,
       6,     7,     8,     9,    24,    10,    25,    33,    11,    12,
      34,    84,    85,    91,    41,    13,    69,    70,     4,    72,
       5,    86,    75,    43,     6,     7,     8,     9,    53,    10,
     -36,   -36,    11,    12,    63,     4,    78,     5,    74,    13,
     -36,     6,     7,     8,     9,    76,    10,   -34,   -34,    11,
      12,    49,    83,    61,    50,    49,    13,   -34,    50,     4,
      93,     5,     0,    98,    99,     6,     7,     8,     9,    94,
      10,    51,    52,    11,    12,    95,     4,    62,     5,     0,
      13,    42,     6,     7,     8,     9,     0,    10,    67,    68,
      11,    12,    77,    54,    55,    56,    57,    13,     0,     0,
      82,    48,     0,     0,    88,    49,    58,    59,    50,    49,
       0,    66,    50,    49,     0,     0,    50
};

static const yytype_int8 yycheck[] =
{
      13,    22,     0,    24,     3,     4,     5,     6,     4,    21,
       6,    25,    33,     0,     1,    21,     3,    26,    24,    34,
       7,     8,     9,    10,    26,    12,    21,    26,    15,    16,
      29,    13,    14,    29,    26,    22,    51,    52,     1,    60,
       3,    23,    63,     3,     7,     8,     9,    10,    27,    12,
      13,    14,    15,    16,    25,     1,    22,     3,    27,    22,
      23,     7,     8,     9,    10,    65,    12,    13,    14,    15,
      16,    29,    11,    27,    32,    29,    22,    23,    32,     1,
      28,     3,    -1,    96,    97,     7,     8,     9,    10,     4,
      12,    33,    34,    15,    16,    28,     1,    41,     3,    -1,
      22,    23,     7,     8,     9,    10,    -1,    12,    49,    50,
      15,    16,    71,    17,    18,    19,    20,    22,    -1,    -1,
      79,    21,    -1,    -1,    83,    29,    30,    31,    32,    29,
      -1,    27,    32,    29,    -1,    -1,    32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    36,    37,     0,     1,     3,     7,     8,     9,    10,
      12,    15,    16,    22,    38,    39,    41,    44,    45,    48,
      51,    21,    25,    26,    26,    21,    49,    37,    40,     3,
       4,     5,     6,    26,    29,    60,    61,    62,    58,    60,
      60,    26,    23,     3,    42,    43,    60,    62,    21,    29,
      32,    33,    34,    27,    17,    18,    19,    20,    30,    31,
      59,    27,    58,    25,    21,    24,    27,    61,    61,    62,
      62,    46,    60,    52,    27,    60,    43,    38,    22,    50,
      47,    53,    38,    11,    13,    14,    23,    54,    38,     4,
       6,    29,    57,    28,     4,    28,    56,    55,    37,    37
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    38,    38,    38,
      38,    38,    38,    40,    39,    41,    41,    41,    42,    42,
      43,    43,    44,    46,    47,    45,    49,    50,    48,    52,
      51,    53,    53,    55,    54,    56,    54,    57,    57,    57,
      58,    59,    59,    59,    59,    59,    59,    60,    60,    60,
      61,    61,    61,    62,    62,    62,    62,    62,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       2,     3,     2,     0,     4,     1,     1,     1,     1,     3,
       1,     3,     4,     0,     0,     9,     0,     0,     7,     0,
       8,     0,     2,     0,     5,     0,     4,     1,     2,     1,
       3,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       3,     3,     1,     3,     2,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 10: /* stmt: BREAK ';'  */
#line 260 "parser.y"
                                      { do_break(); }
#line 1678 "parser.tab.c"
    break;

  case 12: /* stmt: error ';'  */
#line 262 "parser.y"
                                     { yyerrok; }
#line 1684 "parser.tab.c"
    break;

  case 13: /* $@1: %empty  */
#line 266 "parser.y"
                 { cur_type = (yyvsp[0].type); }
#line 1690 "parser.tab.c"
    break;

  case 15: /* type: KW_INT  */
#line 268 "parser.y"
                     { (yyval.type) = T_INT; }
#line 1696 "parser.tab.c"
    break;

  case 16: /* type: KW_FLOAT  */
#line 269 "parser.y"
                     { (yyval.type) = T_FLOAT; }
#line 1702 "parser.tab.c"
    break;

  case 17: /* type: KW_CHAR  */
#line 270 "parser.y"
                     { (yyval.type) = T_CHAR; }
#line 1708 "parser.tab.c"
    break;

  case 20: /* id_item: ID  */
#line 276 "parser.y"
                          { declare((yyvsp[0].str), cur_type); }
#line 1714 "parser.tab.c"
    break;

  case 21: /* id_item: ID '=' expr  */
#line 277 "parser.y"
                          { declare((yyvsp[-2].str), cur_type); assign_to((yyvsp[-2].str), (yyvsp[0].ex)); }
#line 1720 "parser.tab.c"
    break;

  case 22: /* assign: ID '=' expr ';'  */
#line 281 "parser.y"
                             { assign_to((yyvsp[-3].str), (yyvsp[-1].ex)); }
#line 1726 "parser.tab.c"
    break;

  case 23: /* @2: %empty  */
#line 286 "parser.y"
              { int l_else = newlabel();
                emit("ifFalse %s goto L%d", (yyvsp[-1].ex).place, l_else);
                (yyval.ival) = l_else; }
#line 1734 "parser.tab.c"
    break;

  case 24: /* @3: %empty  */
#line 290 "parser.y"
              { int l_end = newlabel();
                emit("goto L%d", l_end);
                emit("L%d:", (yyvsp[-1].ival));
                (yyval.ival) = l_end; }
#line 1743 "parser.tab.c"
    break;

  case 25: /* if_stmt: IF '(' cond ')' @2 stmt @3 ELSE stmt  */
#line 295 "parser.y"
              { emit("L%d:", (yyvsp[-2].ival)); }
#line 1749 "parser.tab.c"
    break;

  case 26: /* @4: %empty  */
#line 300 "parser.y"
               { int l_begin = newlabel();
                 emit("L%d:", l_begin);
                 (yyval.ival) = l_begin; }
#line 1757 "parser.tab.c"
    break;

  case 27: /* @5: %empty  */
#line 304 "parser.y"
               { int l_end = newlabel();
                 emit("ifFalse %s goto L%d", (yyvsp[-1].ex).place, l_end);
                 push_break(l_end);
                 (yyval.ival) = l_end; }
#line 1766 "parser.tab.c"
    break;

  case 28: /* while_stmt: WHILE @4 '(' cond ')' @5 stmt  */
#line 309 "parser.y"
               { emit("goto L%d", (yyvsp[-5].ival));
                 emit("L%d:", (yyvsp[-1].ival));
                 pop_break(); }
#line 1774 "parser.tab.c"
    break;

  case 29: /* $@6: %empty  */
#line 315 "parser.y"
                                   { switch_begin((yyvsp[-1].ex)); }
#line 1780 "parser.tab.c"
    break;

  case 30: /* switch_stmt: SWITCH '(' expr ')' $@6 '{' case_list '}'  */
#line 316 "parser.y"
                                   { switch_end(); }
#line 1786 "parser.tab.c"
    break;

  case 33: /* $@7: %empty  */
#line 322 "parser.y"
                                 { add_case((yyvsp[-1].cv)); }
#line 1792 "parser.tab.c"
    break;

  case 35: /* $@8: %empty  */
#line 323 "parser.y"
                                 { add_default(); }
#line 1798 "parser.tab.c"
    break;

  case 37: /* case_const: INT_LIT  */
#line 326 "parser.y"
                          { (yyval.cv).val = atol((yyvsp[0].str));       (yyval.cv).text = (yyvsp[0].str); }
#line 1804 "parser.tab.c"
    break;

  case 38: /* case_const: '-' INT_LIT  */
#line 327 "parser.y"
                          { (yyval.cv).val = -atol((yyvsp[0].str));
                            (yyval.cv).text = malloc(strlen((yyvsp[0].str)) + 2);
                            sprintf((yyval.cv).text, "-%s", (yyvsp[0].str)); }
#line 1812 "parser.tab.c"
    break;

  case 39: /* case_const: CHAR_LIT  */
#line 330 "parser.y"
                          { (yyval.cv).val = char_value((yyvsp[0].str)); (yyval.cv).text = (yyvsp[0].str); }
#line 1818 "parser.tab.c"
    break;

  case 40: /* cond: expr relop expr  */
#line 334 "parser.y"
                             { (yyval.ex) = relop((yyvsp[-1].str), (yyvsp[-2].ex), (yyvsp[0].ex)); }
#line 1824 "parser.tab.c"
    break;

  case 41: /* relop: EQ  */
#line 336 "parser.y"
                { (yyval.str) = "=="; }
#line 1830 "parser.tab.c"
    break;

  case 42: /* relop: NE  */
#line 337 "parser.y"
                { (yyval.str) = "!="; }
#line 1836 "parser.tab.c"
    break;

  case 43: /* relop: '>'  */
#line 338 "parser.y"
                { (yyval.str) = ">";  }
#line 1842 "parser.tab.c"
    break;

  case 44: /* relop: '<'  */
#line 339 "parser.y"
                { (yyval.str) = "<";  }
#line 1848 "parser.tab.c"
    break;

  case 45: /* relop: GE  */
#line 340 "parser.y"
                { (yyval.str) = ">="; }
#line 1854 "parser.tab.c"
    break;

  case 46: /* relop: LE  */
#line 341 "parser.y"
                { (yyval.str) = "<="; }
#line 1860 "parser.tab.c"
    break;

  case 47: /* expr: expr '+' term  */
#line 345 "parser.y"
                             { (yyval.ex) = binop("+", (yyvsp[-2].ex), (yyvsp[0].ex)); }
#line 1866 "parser.tab.c"
    break;

  case 48: /* expr: expr '-' term  */
#line 346 "parser.y"
                             { (yyval.ex) = binop("-", (yyvsp[-2].ex), (yyvsp[0].ex)); }
#line 1872 "parser.tab.c"
    break;

  case 49: /* expr: term  */
#line 347 "parser.y"
                             { (yyval.ex) = (yyvsp[0].ex); }
#line 1878 "parser.tab.c"
    break;

  case 50: /* term: term '*' factor  */
#line 350 "parser.y"
                             { (yyval.ex) = binop("*", (yyvsp[-2].ex), (yyvsp[0].ex)); }
#line 1884 "parser.tab.c"
    break;

  case 51: /* term: term '/' factor  */
#line 351 "parser.y"
                             { (yyval.ex) = binop("/", (yyvsp[-2].ex), (yyvsp[0].ex)); }
#line 1890 "parser.tab.c"
    break;

  case 52: /* term: factor  */
#line 352 "parser.y"
                             { (yyval.ex) = (yyvsp[0].ex); }
#line 1896 "parser.tab.c"
    break;

  case 53: /* factor: '(' expr ')'  */
#line 355 "parser.y"
                             { (yyval.ex) = (yyvsp[-1].ex); }
#line 1902 "parser.tab.c"
    break;

  case 54: /* factor: '-' factor  */
#line 356 "parser.y"
                             { (yyval.ex) = neg((yyvsp[0].ex)); }
#line 1908 "parser.tab.c"
    break;

  case 55: /* factor: ID  */
#line 357 "parser.y"
                             { (yyval.ex) = var_ref((yyvsp[0].str)); }
#line 1914 "parser.tab.c"
    break;

  case 56: /* factor: INT_LIT  */
#line 358 "parser.y"
                             { (yyval.ex).type = T_INT;   (yyval.ex).place = (yyvsp[0].str); }
#line 1920 "parser.tab.c"
    break;

  case 57: /* factor: FLOAT_LIT  */
#line 359 "parser.y"
                             { (yyval.ex).type = T_FLOAT; (yyval.ex).place = (yyvsp[0].str); }
#line 1926 "parser.tab.c"
    break;

  case 58: /* factor: CHAR_LIT  */
#line 360 "parser.y"
                             { (yyval.ex).type = T_CHAR;  (yyval.ex).place = (yyvsp[0].str); }
#line 1932 "parser.tab.c"
    break;


#line 1936 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 363 "parser.y"


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
