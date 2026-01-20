/*
   Test 0040: Strings Basics
   Description: Difference between string literals and char arrays.
   Focus: char[] vs char*, mutability.
*/
#include <stdio.h>

int main() {
    char str_arr[] = "Hello"; // Mutable array
    char *str_lit = "World";  // Immutable string literal
    
    str_arr[0] = 'h'; // OK
    printf("Mutable: %s\n", str_arr);
    
    // str_lit[0] = 'w'; // Undefined behavior (often crash)
    printf("Immutable: %s\n", str_lit);
    
    return 0;
}
