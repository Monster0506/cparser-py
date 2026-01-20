/*
   Test 0120: Linear Search
   Description: Finding element in unsorted array.
   Focus: O(n) iteration.
*/
#include <stdio.h>

int search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = search(arr, n, x);
    if(result == -1) printf("Not found");
    else printf("Found at index %d", result);
    return 0;
}
