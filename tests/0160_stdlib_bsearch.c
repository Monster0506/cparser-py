/*
   Test 0160: Binary Search (Lib)
   Description: Using standard library bsearch.
   Focus: stdlib bsearch.
*/
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = {10, 20, 50, 90}; // Must be sorted
    int key = 50;
    
    int *res = (int*)bsearch(&key, arr, 4, sizeof(int), cmp);
    
    if (res) printf("Found: %d\n", *res);
    else printf("Not found\n");
    return 0;
}
