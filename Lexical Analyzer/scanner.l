%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int var = 0, i, nc = 0, cLine = 0, flag = 0;
int lineNumber = 1;
int cBrac = 0;
int lexicalError = 0;

FILE *yyin;
FILE *symbol = NULL, *constants = NULL, *parsedOut = NULL;
char *comment, *inputFile, s_comment[1000];

void insertToTable(char *yytext, char type);
void displayComment(char *yytext);
void storeSingleLineComment(char *yytext);
%}

digit      [0-9]
letter     [a-zA-Z]
keyword    "auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"int"|"long"|"register"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"|"NULL"
datatype   "int"|"char"|"void"
sign       "signed"|"unsigned"
modifiers  "long"|"short"
relational >|<|<=|>=|!=|==
logical    \&|\^|\~
arithmatic \+|\-|\*|\/|\%
puncuator  \(|\)|\[|\]|\;|\,|\:|\.
assignment =
quote      \'|\"|\\
whitespace [ \t]+
newline    "\n"
singlelinecomment (\/\/.*)
multilinecommentstart (\/\*)
multilinecommentend (\*\/)
identifier ({letter}({letter}|{digit})*)|"_"({letter}|{digit})+

%x DETECT_COMMENT

%%

^#([-a-zA-Z0-9.]|{relational}|{whitespace})*     { insertToTable(yytext,'d'); }

{keyword}                                        { insertToTable(yytext,'k'); }
{sign}?{whitespace}{modifiers}?{whitespace}{datatype} { insertToTable(yytext,'k'); }

^{datatype}{whitespace}*{identifier}\(.*\) {
    int i, j = 0; char temp1[50] = {'\0'}, temp2[50] = {'\0'};
    for (i = 0; yytext[i] != ' '; i++) temp1[i] = yytext[i];
    insertToTable(temp1, 'k');
    for (; yytext[i] != '('; i++) temp2[j++] = yytext[i];
    insertToTable(temp2, 'j');
}

{identifier}\[{digit}*\] {
    int i, j = 0; char temp[50] = {'\0'};
    for (i = 0; yytext[i] != '['; i++) temp[j++] = yytext[i];
    insertToTable(temp, 'a');
}

\*{identifier} {
    int i, j = 0; char temp[50] = {'\0'};
    for (i = 1; yytext[i] != '\0'; i++) temp[j++] = yytext[i];
    insertToTable(temp, 'q');
}

{identifier} {
    if (strcmp(yytext, "NULL") == 0)
        insertToTable(yytext, 'c');
    else
        insertToTable(yytext, 'i');
}

{digit}+{letter}({letter}|{digit})* {
    lexicalError = 1;
    printf("%s : %d : Invalid Identifier => %s\n", inputFile, lineNumber, yytext);
}

"_" {
    lexicalError = 1;
    printf("%s : %d : Invalid Identifier => %s\n", inputFile, lineNumber, yytext);
}

{relational}                                    { insertToTable(yytext,'r'); }
{logical}                                       { insertToTable(yytext,'l'); }
{arithmatic}                                    { insertToTable(yytext,'o'); }
{assignment}                                    { insertToTable(yytext,'e'); }
{puncuator}                                     { insertToTable(yytext,'p'); }

{digit}+                                        { insertToTable(yytext,'c'); }
\"([^\\\n]|(\\.))*\"                            { insertToTable(yytext,'s'); }

L?\"(\\.|[^\\"])* {
    lexicalError = 1;
    printf("%s : %d : String does not End\n", inputFile, lineNumber);
}

[-+]?{digit}*\.?{digit}+([eE][-+]?{digit}+)?    { insertToTable(yytext,'f'); }

\'({letter}|{digit})\' {
    char temp[50] = {'\0'};
    temp[0] = yytext[1];
    insertToTable(temp, 'z');
}

{quote} ;
{whitespace} ;
{newline} lineNumber++;

"{" {
    cBrac++;
    insertToTable(yytext,'p');
}

"}" {
    cBrac--;
    insertToTable(yytext,'p');
}

{singlelinecomment} { storeSingleLineComment(yytext); }

{multilinecommentstart} {
    BEGIN(DETECT_COMMENT);
    nc++;
    cLine++;
    displayComment("\n\t");
}

<DETECT_COMMENT>{multilinecommentstart} {
    nc++;
    if (nc > 1) {
        printf("%s : %d : Nested Comment\n", inputFile, lineNumber);
        flag = 1;
    }
}

<DETECT_COMMENT>{multilinecommentend} {
    if (nc > 0)
        nc--;
    else
        printf("%s : %d : */ found before /*\n", inputFile, lineNumber);
    if (nc == 0)
        BEGIN(INITIAL);
}

<DETECT_COMMENT>\n {
    cLine++;
    lineNumber++;
    displayComment("\n");
}

<DETECT_COMMENT>. {
    displayComment(yytext);
}
%%

int main(int argc, char **argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror("File opening failed");
            return 1;
        }
        inputFile = argv[1];
    } else {
        yyin = stdin;
        inputFile = "stdin";
    }

    printf("Parsing started...\n\n");

    s_comment[0] = '\0';
    comment = (char*)malloc(100 * sizeof(char));
    comment[0] = '\0';

    yylex();

    if (nc > 0)
        printf("%s : %d : Comment Does Not End\n", inputFile, lineNumber);
    if (cBrac != 0)
        printf("%s : %d : Unbalanced Braces\n", inputFile, lineNumber);

    // Always show this
    printf("%s Parsing Completed\n", inputFile);

    if (!lexicalError) {
        symbol = fopen("symbolTable.txt", "w");
        constants = fopen("constantTable.txt", "w");
        parsedOut = fopen("parsedTable.txt", "w");

        if (symbol) fprintf(symbol, "Symbol Table\n");
        if (constants) fprintf(constants, "Constant Table\n");
        if (parsedOut) fprintf(parsedOut, "Parsed Token Table\n");

        printf("\nParsing completed successfully.\n");

        if (symbol) fclose(symbol);
        if (constants) fclose(constants);
        if (parsedOut) fclose(parsedOut);
    }

    return 0;
}

void insertToTable(char *yytext, char type) {
    char token[30];

    switch (type) {
        case 'd': strcpy(token, "Preprocessor Statement"); break;
        case 'k': strcpy(token, "Keyword"); break;
        case 'j': strcpy(token, "Procedure"); break;
        case 'a': strcpy(token, "Array"); break;
        case 'q': strcpy(token, "Pointer"); break;
        case 'i': strcpy(token, "Identifier"); break;
        case 'r': strcpy(token, "Relational Op"); break;
        case 'p': strcpy(token, "Punctuator"); break;
        case 'o': strcpy(token, "Arithmetic Op"); break;
        case 'c': strcpy(token, "Integer Constant"); break;
        case 'f': strcpy(token, "Float Constant"); break;
        case 'z': strcpy(token, "Character Constant"); break;
        case 'e': strcpy(token, "Assignment Op"); break;
        case 'l': strcpy(token, "Logical Op"); break;
        case 's': strcpy(token, "String Literal"); break;
        default: strcpy(token, "Unknown"); break;
    }

    printf("[Line %3d] %-20s  =>  %s\n", lineNumber, yytext, token);

    if (symbol && (type == 'i' || type == 'a' || type == 'q' || type == 'j'))
        fprintf(symbol, "%-20s => %s\n", yytext, token);

    if (constants) {
        if (type == 'c')
            fprintf(constants, "%-20s => int\n", yytext);
        else if (type == 'f')
            fprintf(constants, "%-20s => float\n", yytext);
        else if (type == 'z')
            fprintf(constants, "%-20s => char\n", yytext);
    }

    if (parsedOut)
        fprintf(parsedOut, "%-20s => %s\n", yytext, token);
}

void storeSingleLineComment(char *yytext) {
    printf("[Line %3d] Single-line comment: %s\n", lineNumber, yytext);
}

void displayComment(char *yytext) {
    printf("Multiline Comment Line: %s", yytext);
}

int yywrap() {
    return 1;
}

