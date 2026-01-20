/*
   Test 0127: Reverse Array
   Description: In-place reversal.
   Focus: Two pointer approach.
*/
#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    reverse(arr, 0, 5);
    for(int i=0;i<6;i++) printf("%d ", arr[i]);
    return 0;
}
