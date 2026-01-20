/*
   Test 0164: C11 Atomics
   Description: Lock-free operations.
   Focus: stdatomic.h.
*/
#include <stdio.h>
#include <stdatomic.h>

int main() {
    atomic_int counter = ATOMIC_VAR_INIT(0);
    
    atomic_fetch_add(&counter, 1);
    atomic_fetch_add(&counter, 5);
    
    printf("Counter: %d\n", atomic_load(&counter));
    return 0;
}
