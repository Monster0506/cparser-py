/*
   Test 0014: For Loop
   Description: Standard counting loop.
   Focus: for loop, loop variables.
*/
#include <stdio.h>

int main() {
    int factorial_n = 5;
    int result = 1;

    printf("Calculating %d! ...\n", factorial_n);

    for (int i = 1; i <= factorial_n; i++) {
        result *= i;
        printf("Current: %d\n", result);
    }
    
    printf("Final result: %d\n", result);

    return 0;
}
