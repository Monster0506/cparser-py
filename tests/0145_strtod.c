/*
   Test 0145: String to Double
   Description: Robust float parsing.
   Focus: strtod.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *input = "3.14159 is pi";
    char *endptr;
    
    double val = strtod(input, &endptr);
    
    printf("Val: %f\n", val);
    printf("Remainder: %s\n", endptr);
    return 0;
}
