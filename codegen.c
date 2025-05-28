#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_VARS 100
#define MAX_LINE 256

char declared[MAX_VARS][20];
int declared_count = 0;

void trim_newline(char *line) {
    size_t len = strlen(line);
    if (len && line[len - 1] == '\n') line[len - 1] = '\0';
}

int is_declared(const char *var) {
    for (int i = 0; i < declared_count; ++i)
        if (strcmp(declared[i], var) == 0)
            return 1;
    return 0;
}

void declare_var(const char *var) {
    if (!is_declared(var)) {
        strcpy(declared[declared_count++], var);
    }
}

void collect_variables(FILE *in) {
    char line[MAX_LINE];
    while (fgets(line, sizeof(line), in)) {
        trim_newline(line);
        if (strstr(line, " = ")) {
            char lhs[20], rhs[100];
            sscanf(line, "%s = %[^\n]", lhs, rhs);
            declare_var(lhs);

            char *token = strtok(rhs, " +-*/><=,()");
            while (token) {
                if (isalpha(token[0])) declare_var(token);
                token = strtok(NULL, " +-*/><=,()");
            }
        } else if (strstr(line, "IF not")) {
            char var[20];
            sscanf(line, "IF not %s", var);
            declare_var(var);
        } else if (strstr(line, "refparam")) {
            char param[20];
            sscanf(line, "refparam %s", param);
            if (!strstr(param, "\"")) declare_var(param);
        }
    }
    rewind(in);
}

int main() {
    FILE *in = fopen("input.ir", "r");
    FILE *out = fopen("output.asm", "w");
    char line[MAX_LINE];

    if (!in || !out) {
        perror("File error");
        return 1;
    }

    collect_variables(in);

    // Output BSS section
    fprintf(out, "section .bss\n");
    for (int i = 0; i < declared_count; i++)
        fprintf(out, "    %s resd 1\n", declared[i]);

    // Output text section
    fprintf(out, "\nsection .text\n");
    fprintf(out, "    global _start\n");
    fprintf(out, "_start:\n");

    while (fgets(line, sizeof(line), in)) {
        trim_newline(line);
        if (strlen(line) == 0) continue;

        if (line[strlen(line) - 1] == ':') {
            fprintf(out, "%s\n", line);
        } else if (strstr(line, " = ")) {
            char lhs[20], rhs[100];
            sscanf(line, "%s = %[^\n]", lhs, rhs);

            if (isdigit(rhs[0])) {
                fprintf(out, "    mov eax, %s\n", rhs);
                fprintf(out, "    mov [%s], eax\n", lhs);
            } else if (strstr(rhs, "+") || strstr(rhs, "-") ||
                       strstr(rhs, "*") || strstr(rhs, "/")) {
                char op1[20], op2[20], op;
                sscanf(rhs, "%s %c %s", op1, &op, op2);
                fprintf(out, "    mov eax, [%s]\n", op1);
                switch (op) {
                    case '+': fprintf(out, "    add eax, [%s]\n", op2); break;
                    case '-': fprintf(out, "    sub eax, [%s]\n", op2); break;
                    case '*': fprintf(out, "    imul eax, [%s]\n", op2); break;
                    case '/':
                        fprintf(out, "    mov edx, 0\n");
                        fprintf(out, "    mov ebx, [%s]\n", op2);
                        fprintf(out, "    div ebx\n");
                        break;
                }
                fprintf(out, "    mov [%s], eax\n", lhs);
            } else if (strstr(rhs, ">")) {
                char op1[20], op2[20];
                sscanf(rhs, "%s > %s", op1, op2);
                fprintf(out, "    mov eax, [%s]\n", op1);
                fprintf(out, "    cmp eax, [%s]\n", op2);
                fprintf(out, "    setg al\n");
                fprintf(out, "    movzx eax, al\n");
                fprintf(out, "    mov [%s], eax\n", lhs);
            }
        } else if (strstr(line, "IF not")) {
            char var[20], label[20];
            sscanf(line, "IF not %s GoTo %s", var, label);
            fprintf(out, "    cmp [%s], 0\n", var);
            fprintf(out, "    je %s\n", label);
        } else if (strstr(line, "GoTo")) {
            char label[20];
            sscanf(line, "GoTo %s", label);
            fprintf(out, "    jmp %s\n", label);
        } else if (strstr(line, "refparam")) {
            char param[100];
            sscanf(line, "refparam %[^\n]", param);
            fprintf(out, "    push [%s]\n", param);
        } else if (strstr(line, "call")) {
            char func[30];
            int arg_count;
            sscanf(line, "call %[^,], %d", func, &arg_count);
            fprintf(out, "    call %s\n", func);
            fprintf(out, "    add esp, %d\n", arg_count * 4);
        } else if (strstr(line, "func end")) {
            fprintf(out, "    mov eax, 1\n");
            fprintf(out, "    int 0x80\n");
        }
    }

    fclose(in);
    fclose(out);
    printf("Clean assembly written to output.asm\n");
    return 0;
}

