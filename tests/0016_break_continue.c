/*
   Test 0016: Break and Continue
   Description: Controlling loop flow.
   Focus: break, continue keywords.
*/
#include <stdio.h>

int main() {
    printf("Printing odd numbers, stopping at 10:\n");
    
    for (int i = 0; i < 20; i++) {
        if (i > 10) {
            printf("Reached limit (10). Breaking.\n");
            break;
        }
        
        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        
        printf("Odd: %d\n", i);
    }

    return 0;
}
