/*
   Test 0032: Pointer Arithmetic
   Description: Moving pointers.
   Focus: ptr++, sizeof interactions.
*/
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *p = arr; // Points to arr[0]
    
    printf("First: %d\n", *p);
    
    p++; // Points to arr[1]
    printf("Second: %d\n", *p);
    
    p++; // Points to arr[2]
    printf("Third: %d\n", *p);
    
    return 0;
}
