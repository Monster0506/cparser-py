/*
   Test 0015: Nested Loops
   Description: Loop inside a loop (multiplication table).
   Focus: Nested iteration, output formatting.
*/
#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 5;
    
    printf("Multiplication Table (5x5):\n");
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}
