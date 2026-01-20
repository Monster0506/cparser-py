/*
   Test 0121: Binary Search
   Description: Finding element in sorted array.
   Focus: O(log n) divide and conquer.
*/
#include <stdio.h>

int binary_search(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        
        if (arr[m] == x) return m;
        if (arr[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    int result = binary_search(arr, 0, n-1, x);
    
    printf("Result index: %d\n", result);
    return 0;
}
