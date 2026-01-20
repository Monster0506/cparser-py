/*
   Test 0083: Realloc
   Description: Resizing a dynamic array.
   Focus: realloc behavior.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int*)malloc(2 * sizeof(int));
    arr[0] = 10;
    arr[1] = 20;
    
    // Resize to hold 4 integers
    // Note: Use temporary pointer to be safe against allocation failure
    int *temp = (int*)realloc(arr, 4 * sizeof(int));
    
    if (temp) {
        arr = temp;
        arr[2] = 30;
        arr[3] = 40;
        
        printf("Expanded array: %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
    } else {
        printf("Realloc failed\n");
        free(arr); // original block still valid if realloc fails
        return 1;
    }
    
    free(arr);
    return 0;
}
