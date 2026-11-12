%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.tab.h"

void LexError(const char *fmt, ...);
static int CommentLine;
%}

%option noyywrap noinput nounput yylineno nodefault
%x COMMENT

DIGIT   [0-9]
LETTER  [a-zA-Z_]

%%

"//".*                      { /* line of comment */ }
"/*"                        { CommentLine = yylineno; BEGIN(COMMENT); }
<COMMENT>"*/"               { BEGIN(INITIAL); }
<COMMENT>\n                 { }
<COMMENT>.                  { }
<COMMENT><<EOF>>            { LexError("comment on line %d was not closed", CommentLine);
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

[ \t\r\n]+                  { /* blank space */ }

.                           { LexError("invalid character '%s'", yytext); }

%%
