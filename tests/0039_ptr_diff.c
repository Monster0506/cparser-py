/*
   Test 0039: Pointer Arithmetic Subtraction
   Description: Distance between pointers.
   Focus: ptr a - ptr b.
*/
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int *start = &arr[0];
    int *end = &arr[5];
    
    // Difference is in "elements", not bytes
    long diff = end - start;
    
    printf("Distance elements: %ld\n", diff);
    
    return 0;
}
