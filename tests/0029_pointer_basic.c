/*
   Test 0029: Pointer Basics
   Description: Declaration and address-of operator.
   Focus: *, usually int*.
*/
#include <stdio.h>

int main() {
    int val = 42;
    int *ptr = &val;
    
    printf("Value of val: %d\n", val);
    printf("Address of val: %p\n", (void*)&val);
    printf("Value of ptr: %p\n", (void*)ptr);
    
    return 0;
}
