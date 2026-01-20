/*
   Test 0106: Multi-line Macros
   Description: Macros spanning lines safely.
   Focus: do { ... } while(0) idiom.
*/
#include <stdio.h>

#define SWAP(a, b) do { \
    int temp = a; \
    a = b; \
    b = temp; \
} while(0)

int main() {
    int x = 1, y = 2;
    
    if (x < y)
        SWAP(x, y); // Safe in if-stmt without braces
        
    printf("x: %d, y: %d\n", x, y);
    return 0;
}
