%{
/* Coffee Tub - analisador léxico (etapa 1)
 * O lexer já reconhece TODOS os tokens da linguagem; o parser é que
 * vai passando a aceitar as construções etapa por etapa. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.tab.h"

void lex_error(const char *fmt, ...);
static int comment_line;
%}

%option noyywrap noinput nounput yylineno nodefault
%x COMMENT

DIGIT   [0-9]
LETTER  [a-zA-Z_]

%%

"//".*                      { /* comentário de linha */ }
"/*"                        { comment_line = yylineno; BEGIN(COMMENT); }
<COMMENT>"*/"               { BEGIN(INITIAL); }
<COMMENT>\n                 { }
<COMMENT>.                  { }
<COMMENT><<EOF>>            { lex_error("comentário iniciado na linha %d não foi fechado", comment_line);
                              BEGIN(INITIAL); yyterminate(); }

"int"                       { return KW_INT; }
"float"                     { return KW_FLOAT; }
"char"                      { return KW_CHAR; }
"if"                        { return IF; }
"else"                      { return ELSE; }
"switch"                    { return SWITCH; }
"case"                      { return CASE; }
"default"                   { return DEFAULT; }
"break"                     { return BREAK; }
"while"                     { return WHILE; }

"=="                        { return EQ; }
"!="                        { return NE; }
">="                        { return GE; }
"<="                        { return LE; }

{DIGIT}+"."{DIGIT}+         { yylval.str = strdup(yytext); return FLOAT_LIT; }
{DIGIT}+                    { yylval.str = strdup(yytext); return INT_LIT; }
'([^'\\\n]|\\[ntr0\\'"])'   { yylval.str = strdup(yytext); return CHAR_LIT; }
{LETTER}({LETTER}|{DIGIT})* { yylval.str = strdup(yytext); return ID; }

[{}();,:+\-*/=<>]           { return yytext[0]; }

[ \t\r\n]+                  { /* espaço em branco */ }

.                           { lex_error("caractere inválido '%s'", yytext); }

%%
