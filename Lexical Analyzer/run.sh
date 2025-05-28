flex scanner.l
gcc lex.yy.c -o lexer
./lexer tests test1.c
