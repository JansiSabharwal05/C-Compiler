#include <string.h>
#include <stdlib.h>

typedef struct Symbol {
    char *name;
    struct Symbol *next;
} Symbol;

Symbol *symbol_table = NULL;

void insert_symbol(char *name) {
    Symbol *new_symbol = (Symbol *)malloc(sizeof(Symbol));
    new_symbol->name = strdup(name);
    new_symbol->next = symbol_table;
    symbol_table = new_symbol;
}

void print_symbol_table() {
    Symbol *current = symbol_table;
    while (current) {
        printf("Symbol: %s\n", current->name);
        current = current->next;
    }
}

