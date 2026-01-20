/*
   Test 0012: While Loop
   Description: Basic iteration with a pre-condition.
   Focus: while loop.
*/
#include <stdio.h>

int main() {
    int countdown = 5;
    
    printf("Initiating Countdown...\n");
    
    while (countdown > 0) {
        printf("%d...\n", countdown);
        countdown--;
    }
    
    printf("Liftoff!\n");

    return 0;
}
