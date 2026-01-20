/*
   Test 0103: Macro Operators
   Description: Stringizing and Token Pasting.
   Focus: # and ## operators.
*/
#include <stdio.h>

// Stringizing: converts argument to string literal
#define TO_STR(x) #x

// Token Pasting: concatenates two tokens
#define MERGE(a, b) a##b

int main() {
    int xy = 100;
    
    printf("String: %s\n", TO_STR(Hello World));
    printf("Merged Value: %d\n", MERGE(x, y)); // prints xy
    
    return 0;
}
