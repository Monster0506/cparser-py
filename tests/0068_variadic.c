/*
   Test 0068: Variadic Functions
   Description: Functions accepting variable number of args.
   Focus: <stdarg.h>, va_list.
*/
#include <stdio.h>
#include <stdarg.h>

void print_nums(int count, ...) {
    va_list args;
    va_start(args, count);
    
    for (int i = 0; i < count; i++) {
        int val = va_arg(args, int);
        printf("%d ", val);
    }
    printf("\n");
    
    va_end(args);
}

int main() {
    print_nums(3, 10, 20, 30);
    print_nums(5, 1, 2, 3, 4, 5);
    return 0;
}
