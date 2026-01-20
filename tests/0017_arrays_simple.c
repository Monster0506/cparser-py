/*
   Test 0017: Simple Array
   Description: Declaring and initializing an array in various ways.
   Focus: Array syntax, zero-initialization.
*/
#include <stdio.h>

int main() {
    int primes[5] = {2, 3, 5, 7, 11};
    int zeroes[5] = {0}; // All zero
    
    printf("Third prime is: %d\n", primes[2]);
    printf("First zero is: %d\n", zeroes[0]);
    
    // Modification
    primes[0] = 500;
    printf("Modified index 0: %d\n", primes[0]);

    return 0;
}
