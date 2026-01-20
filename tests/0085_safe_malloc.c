/*
   Test 0085: Safe Allocation Logic
   Description: Idiomatic null checks.
   Focus: Error handling macros/logic.
*/
#include <stdio.h>
#include <stdlib.h>

void* safe_malloc(size_t size) {
    void *ptr = malloc(size);
    if (!ptr) {
        fprintf(stderr, "Fatal: Out of memory\n");
        exit(1);
    }
    return ptr;
}

int main() {
    int *nums = (int*)safe_malloc(100 * sizeof(int));
    nums[0] = 1;
    printf("Allocated safely.\n");
    free(nums);
    return 0;
}
