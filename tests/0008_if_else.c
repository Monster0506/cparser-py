/*
   Test 0008: If-Else Structure
   Description: Two-path conditional execution.
   Focus: if, else.
*/
#include <stdio.h>

int main() {
    int number = 7;
    
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }
    
    return 0;
}
