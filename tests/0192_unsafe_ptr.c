/*
   Test 0192: Magic Pointers
   Description: Using hardcoded addresses.
   Focus: 0x...
*/
#include <stdio.h>
#include <stdint.h>

int main() {
    // Typical in embedded dev, dangerous in OS
    uintptr_t addr = 0xDEADBEEF;
    int *ptr = (int*)addr;
    
    printf("Pointer: %p\n", (void*)ptr);
    // *ptr = 1; // Crash
    return 0;
}
