CC=gcc
CFLAGS=-Wall

coffeetub: parser.tab.c lex.yy.c
	$(CC) $(CFLAGS) -o $@ parser.tab.c lex.yy.c

parser.tab.c parser.tab.h: parser.y
	bison -Wall -d parser.y

lex.yy.c: lexer.l parser.tab.h
	flex lexer.l

test: coffeetub
	@for f in tests/*.ct; do echo "##### $$f"; ./coffeetub $$f; echo "(código de saída: $$?)"; echo; done

clean:
	rm -f coffeetub parser.tab.c parser.tab.h lex.yy.c
