/*
   Test 0034: Pass by Reference
   Description: Changing function arguments using pointers.
   Focus: & operator in call, * in function.
*/
#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;
    
    printf("Before swap: %d, %d\n", a, b);
    swap(&a, &b);
    printf("After swap: %d, %d\n", a, b);
    
    return 0;
}
