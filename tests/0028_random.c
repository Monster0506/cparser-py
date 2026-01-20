/*
   Test 0028: Random Numbers
   Description: Generating pseudo-random numbers.
   Focus: rand, srand, <stdlib.h>.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Note: seeding with constant for deterministic test output, 
    // usually use time(NULL).
    srand(42); 
    
    printf("Random die roll: %d\n", (rand() % 6) + 1);
    printf("Random die roll: %d\n", (rand() % 6) + 1);
    
    return 0;
}
