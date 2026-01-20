/*
   Test 0004: Basic Math Expressions
   Description: Simple arithmetic expressions with precedence.
   Focus: +, -, *, order of operations.
*/
#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int c = 2;
    
    // (10 + 5) * 2 = 30
    int result1 = (a + b) * c;
    
    // 10 + 5 * 2 = 20
    int result2 = a + b * c;

    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);

    return 0;
}
