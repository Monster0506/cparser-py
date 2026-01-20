/*
   Test 0183: Stack Overflow
   Description: Infinite recursion.
   Focus: Runtime crash.
*/
#include <stdio.h>

void infinite(int i) {
    volatile char buffer[1024]; // Consume stack
    buffer[0] = i;
    printf("Depth: %d\n", i);
    infinite(i + 1);
}

int main() {
    // infinite(0); // Commented to prevent actual crash during batch run
    printf("Uncomment to crash.\n");
    return 0;
}
