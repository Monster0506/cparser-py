/*
   Test 0086: Double Free Prevention
   Description: Setting pointer to NULL after free.
   Focus: Dangling pointers.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *ptr = (char*)malloc(10);
    
    free(ptr);
    ptr = NULL; // Good practice
    
    // free(ptr); // Safe because ptr is NULL
    // if (ptr) ... // Safe
    
    printf("Memory freed and pointer nulled.\n");
    return 0;
}
