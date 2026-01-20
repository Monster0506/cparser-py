/*
   Test 0101: Function-like Macros
   Description: Macros that look like functions.
   Focus: Arguments in macros.
*/
#include <stdio.h>

#define MIN_VAL(a, b) ((a) < (b) ? (a) : (b))
#define SQUARE(x) ((x) * (x))

int main() {
    int x = 10, y = 20;
    
    printf("Min: %d\n", MIN_VAL(x, y));
    printf("Square: %d\n", SQUARE(x + 1)); // ((10+1) * (10+1)) = 121
    
    return 0;
}
