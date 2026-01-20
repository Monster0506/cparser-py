/*
   Test 0037: Const Pointers
   Description: const before and after *.
   Focus: const int*, int *const.
*/
#include <stdio.h>

int main() {
    int val1 = 10;
    int val2 = 20;
    
    // Pointer to constant int (cannot change value)
    const int *ptr1 = &val1;
    // *ptr1 = 15; // Error
    ptr1 = &val2; // OK
    
    // Constant pointer (cannot change address)
    int *const ptr2 = &val1;
    *ptr2 = 15; // OK
    // ptr2 = &val2; // Error
    
    printf("ptr1 points to %d\n", *ptr1);
    printf("ptr2 points to %d\n", *ptr2);
    
    return 0;
}
