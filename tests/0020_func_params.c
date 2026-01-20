/*
   Test 0020: Function Parameters
   Description: Functions with multiple parameters of different types.
   Focus: Parameter passing, type matching.
*/
#include <stdio.h>

void print_profile(int id, float height, char initial) {
    printf("ID: %d\n", id);
    printf("Height: %.2fm\n", height);
    printf("Initial: %c\n", initial);
}

int main() {
    print_profile(101, 1.75, 'J');
    print_profile(102, 1.80, 'M');
    return 0;
}
