/*
   Test 0033: Arrays and Pointers
   Description: Equivalence of array name and pointer.
   Focus: Array decaying to pointer.
*/
#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int *p = numbers;
    
    printf("numbers[2] = %d\n", numbers[2]);
    printf("*(p + 2) = %d\n", *(p + 2));
    
    return 0;
}
