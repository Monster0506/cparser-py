/*
   Test 0195: Brainfuck VM
   Description: Interpreting BF code.
   Focus: Switch, tape array.
*/
#include <stdio.h>

void execute_bf(const char *code) {
    unsigned char tape[30000] = {0};
    unsigned char *ptr = tape;
    const char *pc = code;
    
    while (*pc) {
        switch (*pc) {
            case '>': ++ptr; break;
            case '<': --ptr; break;
            case '+': ++*ptr; break;
            case '-': --*ptr; break;
            case '.': putchar(*ptr); break;
            case '[': 
                if (!*ptr) {
                    int loop = 1;
                    while (loop > 0) {
                        pc++;
                        if (*pc == '[') loop++;
                        if (*pc == ']') loop--;
                    }
                }
                break;
            case ']':
                if (*ptr) {
                    int loop = 1;
                    while (loop > 0) {
                        pc--;
                        if (*pc == '[') loop--;
                        if (*pc == ']') loop++;
                    }
                }
                break;
        }
        pc++;
    }
}

int main() {
    // Prints "Hi"
    execute_bf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.+.>.");
    printf("\n");
    return 0;
}
