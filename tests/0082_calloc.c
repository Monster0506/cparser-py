/*
   Test 0082: Calloc
   Description: Allocating and clearing memory.
   Focus: calloc vs malloc.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocates space for 5 ints and initializes to 0
    int *arr = (int*)calloc(5, sizeof(int));
    
    if (!arr) return 1;
    
    printf("Value at index 3: %d (Should be 0)\n", arr[3]);
    
    free(arr);
    return 0;
}
