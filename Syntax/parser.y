%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int lineNumber;
extern char *yytext;
extern FILE *yyin;

// Shared variables from lexicalAnalyzer.l
extern char *inputFile;
extern char *comment;
extern char s_comment[1000];
extern FILE *symbol;
extern FILE *constants;
extern FILE *yyout;

int errorCount = 0;
void yyerror(const char *msg);
%}

%union {
    char *str;
}

%token <str> IDENTIFIER CONSTANT STRING_LITERAL
%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM
%token EXTERN FLOAT FOR GOTO IF INT LONG REGISTER RETURN SHORT SIGNED
%token SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION UNSIGNED VOID VOLATILE WHILE
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT RIGHT MOD DIV STAR MINUS PLUS
%token ASSIGN
%token SEMI COMMA COLON DOT
%token LPAREN RPAREN LBRACK RBRACK LBRACE RBRACE

%start translation_unit

%%

translation_unit:
      external_declaration
    | translation_unit external_declaration
    ;

external_declaration:
      function_definition
    | declaration
    ;

declaration:
      type_specifier declarator_list SEMI
    ;

type_specifier:
      VOID
    | CHAR
    | INT
    | FLOAT
    ;

declarator_list:
      declarator
    | declarator_list COMMA declarator
    ;

declarator:
      IDENTIFIER
    | STAR IDENTIFIER
    ;

function_definition:
      type_specifier IDENTIFIER LPAREN parameter_list RPAREN compound_statement
    ;

parameter_list:
      parameter_declaration
    | parameter_list COMMA parameter_declaration
    ;

parameter_declaration:
      type_specifier declarator
    ;

compound_statement:
      LBRACE statement_list RBRACE
    ;

statement_list:
      statement
    | statement_list statement
    ;

statement:
      expression_statement
    | compound_statement
    ;

expression_statement:
      expression SEMI
    ;

expression:
      assignment_expression
    ;

assignment_expression:
      IDENTIFIER ASSIGN CONSTANT
    | IDENTIFIER ASSIGN IDENTIFIER
    ;

%%

void yyerror(const char *msg) {
    if (strstr(msg, "syntax error at ''") != NULL || strcmp(yytext, "") == 0) {
        return;  
    }

    if (strstr(msg, "type mismatch") != NULL && strstr(msg, "int and float") != NULL) {
        return; 
    }

    fprintf(stderr, "Syntax Error at line %d: %s at '%s'\n", lineNumber, msg, yytext);
    errorCount++;
}



int main(int argc, char **argv) {
    FILE *fp;

    if (argc > 1) {
        fp = fopen(argv[1], "r");
        if (!fp) {
            perror("Cannot open input file");
            return 1;
        }
        yyin = fp;
        inputFile = argv[1];
    } else {
        yyin = stdin;
        inputFile = "stdin";
    }

    comment = (char*)malloc(1);
    comment[0] = '\0';
    s_comment[0] = '\0';

    symbol = fopen("symbolTable.txt", "w");
    fprintf(symbol, "\n Symbol Table:\n \t\t\tLexeme\t\t\t\tType\t\t\tAttribute Value\t\t\tLine Number\n");

    constants = fopen("constantTable.txt", "w");
    fprintf(constants, "\n Constants Table:\n \t\t\tLexeme\t\t\tType\t\t\tAttribute Value\t\t\tLine Number\n");

    yyout = fopen("parsedTable.txt", "w");
    fprintf(yyout, "\n Table:\n \t\t\tLexeme\t\t\tToken\t\t\t\tAttribute Value\t\t\tLine Number\n");

    printf("Parsing started...\n\n");
    yyparse();  // Start parsing the file
    printf("\n%s Parsing Completed\n\n", inputFile);

    if (errorCount == 0)
        printf("Parsing completed successfully.\n");
    else
        printf("Parsing completed with %d errors.\n", errorCount);

    fclose(symbol);
    fclose(constants);
    fclose(yyout);
    if (yyin != stdin) fclose(yyin);

    return 0;
}
