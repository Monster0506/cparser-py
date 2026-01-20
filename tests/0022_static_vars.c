/*
   Test 0022: Static Variables
   Description: Static variables inside functions retain state.
   Focus: 'static' keyword.
*/
#include <stdio.h>

void counter() {
    static int count = 0;
    count++;
    printf("Count is now: %d\n", count);
}

int main() {
    counter();
    counter();
    counter();
    return 0;
}
