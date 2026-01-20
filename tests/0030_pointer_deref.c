/*
   Test 0030: Pointer Dereferencing
   Description: Accessing value through pointer.
   Focus: * operator (dereference).
*/
#include <stdio.h>

int main() {
    int val = 100;
    int *p = &val;
    
    printf("Original: %d\n", *p);
    
    *p = 200; // Change val through pointer
    
    printf("Modified via pointer: %d\n", val);
    
    return 0;
}
