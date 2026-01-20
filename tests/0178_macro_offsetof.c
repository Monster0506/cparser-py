/*
   Test 0178: Offsetof Macro
   Description: Finding member offset manually.
   Focus: stddef.h offsetof.
*/
#include <stdio.h>
#include <stddef.h>

struct S {
    char c;
    int i; 
};

int main() {
    printf("Offset of c: %zu\n", offsetof(struct S, c));
    printf("Offset of i: %zu\n", offsetof(struct S, i));
    return 0;
}
