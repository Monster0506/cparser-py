/*
   Test 0165: Generic Selection
   Description: Type-based selection (overloading-ish).
   Focus: _Generic.
*/
#include <stdio.h>

#define print_val(x) _Generic((x), \
    int: printf("Int: %d\n", x), \
    double: printf("Double: %.2f\n", x), \
    char*: printf("Str: %s\n", x) \
)

int main() {
    print_val(10);
    print_val(3.14);
    print_val("Hello");
    return 0;
}
