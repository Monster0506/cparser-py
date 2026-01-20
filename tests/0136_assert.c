/*
   Test 0136: Assertions
   Description: Runtime checks.
   Focus: assert.h.
*/
#include <stdio.h>
#include <assert.h>

int main() {
    int x = 5;
    assert(x == 5);
    
    // assert(x == 10); // Would abort program
    
    printf("Assertions passed.\n");
    return 0;
}
