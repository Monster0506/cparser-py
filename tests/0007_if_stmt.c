/*
   Test 0007: Simple If Statement
   Description: Conditional execution.
   Focus: if, logical operators (==, >).
*/
#include <stdio.h>

int main() {
    int temperature = 85;

    if (temperature > 80) {
        printf("It is hot outside.\n");
    }

    if (temperature == 85) {
        printf("It is exactly 85 degrees.\n");
    }
    
    printf("Check complete.\n");

    return 0;
}
