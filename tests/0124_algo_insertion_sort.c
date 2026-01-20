/*
   Test 0124: Insertion Sort
   Description: Basic insertion sort.
   Focus: O(n^2) mostly sorted efficiency.
*/
#include <stdio.h>

void insertion_sort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = 5;
    insertion_sort(arr, n);
    for(int i=0;i<n;i++) printf("%d ", arr[i]);
    return 0;
}
