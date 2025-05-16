#include <stdlib.h>
#include <string.h>

typedef struct Constant {
    char *value;
    struct Constant *next;
} Constant;

Constant *constant_table = NULL;

void insert_constant(char *value) {
    Constant *new_constant = (Constant *)malloc(sizeof(Constant));
    new_constant->value = strdup(value);
    new_constant->next = constant_table;
    constant_table = new_constant;
}

void print_constant_table() {
    Constant *current = constant_table;
    while (current) {
        printf("Constant: %s\n", current->value);
        current = current->next;
    }
}

