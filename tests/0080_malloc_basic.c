/*
   Test 0080: Malloc Basic
   Description: Allocating a single integer on the heap.
   Focus: malloc, free, sizeof.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*)malloc(sizeof(int));
    
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    *p = 42;
    printf("Allocated value: %d\n", *p);
    
    free(p);
    return 0;
}
