/*
   Test 0167: Alignment
   Description: Specifying memory alignment.
   Focus: alignas, alignof.
*/
#include <stdio.h>
#include <stdalign.h>

int main() {
    alignas(16) int x; // e.g., for SIMD
    
    printf("Align of int: %zu\n", alignof(int));
    printf("Align of x: %zu\n", alignof(x)); // Should be 16
    
    return 0;
}
