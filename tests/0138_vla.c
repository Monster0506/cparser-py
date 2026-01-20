/*
   Test 0138: Variable Length Arrays (C99)
   Description: Arrays with runtime size.
   Focus: VLA syntax.
*/
#include <stdio.h>

void print_array(int n) {
    int arr[n]; // Size determined at runtime
    
    for(int i=0; i<n; i++) arr[i] = i;
    
    printf("VLA Size: %d\n", n);
}

int main() {
    print_array(5);
    print_array(10);
    return 0;
}
