/*
   Test 0081: Dynamic Array
   Description: Allocating a block of memory for an array.
   Focus: malloc with multiplication.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *arr = (int*)malloc(n * sizeof(int));
    
    if (!arr) return 1;
    
    for(int i=0; i<n; i++) {
        arr[i] = i * 10;
    }
    
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    return 0;
}
