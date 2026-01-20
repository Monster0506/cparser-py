/*
   Test 0013: Do-While Loop
   Description: Iteration that runs at least once.
   Focus: do-while loop.
*/
#include <stdio.h>

int main() {
    int num = 1;
    
    printf("Powers of 2 less than 100:\n");
    
    do {
        printf("%d ", num);
        num *= 2;
    } while (num < 100);
    
    printf("\nDone.\n");

    return 0;
}
