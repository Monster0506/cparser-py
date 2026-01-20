/*
   Test 0066: Callbacks
   Description: Passing function pointer to another function.
   Focus: standard callback pattern.
*/
#include <stdio.h>

void process_data(int *arr, int size, void (*action)(int)) {
    for (int i = 0; i < size; i++) {
        action(arr[i]);
    }
}

void print_val(int x) {
    printf("Val: %d\n", x);
}

void double_print_val(int x) {
    printf("Double: %d\n", x * 2);
}

int main() {
    int nums[] = {1, 2, 3};
    
    printf("Standard print:\n");
    process_data(nums, 3, print_val);
    
    printf("\nDoubled print:\n");
    process_data(nums, 3, double_print_val);
    
    return 0;
}
