/*
   Test 0182: Obfuscated Math
   Description: Arithmetic using only bitwise ops.
   Focus: ~ and - logic.
*/
#include <stdio.h>

int add(int x, int y) {
    while (y != 0) {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}

int main() {
    // -x is (~x + 1)
    int n = 10;
    int neg = ~n + 1;
    
    printf("Add: %d\n", add(10, 20));
    printf("Neg: %d\n", neg);
    return 0;
}
