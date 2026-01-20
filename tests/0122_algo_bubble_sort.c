/*
   Test 0122: Bubble Sort
   Description: Sorting by swapping adjacent elements.
   Focus: O(n^2) nested loops.
*/
#include <stdio.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    bubble_sort(arr, n);
    
    printf("Sorted: ");
    for (int i=0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
