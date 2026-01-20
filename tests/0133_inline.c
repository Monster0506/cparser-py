/*
   Test 0133: Inline functions
   Description: Suggesting inlining to compiler.
   Focus: inline keyword.
*/
#include <stdio.h>

inline static int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    printf("Max: %d\n", max(10, 50));
    return 0;
}
