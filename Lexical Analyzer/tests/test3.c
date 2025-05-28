#include <stdlib.h>  // preprocessor directive

/* This is a
   valid multi-line comment */

int main() {
    int num1 = 42;
    float pi = 3.14;
    char *ptr = "Hello";

    char str[5] = "Hi"; // valid array

    char c = 'A';
    char e = NULL;      // should be treated as constant

    int 99num = 10;     // invalid identifier
    char _ = 'x';       // invalid identifier

    char broken[10] = "Unclosed string;

    // single-line comment
    return 0;
}
