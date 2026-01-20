/*
   Test 0159: Quick Sort (Lib)
   Description: Using standard library qsort.
   Focus: stdlib qsort, comparator.
*/
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = {50, 20, 90, 10};
    qsort(arr, 4, sizeof(int), compare);
    
    printf("Sorted: %d %d\n", arr[0], arr[1]);
    return 0;
}
