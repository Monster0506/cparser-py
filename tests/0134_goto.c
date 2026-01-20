/*
   Test 0134: Goto statement
   Description: Jumping to labels.
   Focus: goto error_handling pattern.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(100);
    if (!ptr) goto error;
    
    // Do work
    if (1) { // Simulating failure
        goto cleanup;
    }
    
cleanup:
    free(ptr);
    printf("Cleaned up.\n");
    return 0;

error:
    printf("Error alloc.\n");
    return 1;
}
