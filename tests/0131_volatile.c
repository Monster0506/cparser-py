/*
   Test 0131: Volatile Keyword
   Description: Preventing compiler optimization on variables.
   Focus: volatile qualifier.
*/
#include <stdio.h>

int main() {
    volatile int status = 0;
    
    // Compiler must not optimize this loop away, 
    // assuming 'status' might change externally.
    while (status == 100) {
        // Wait...
    }
    
    printf("Volatile check done.\n");
    return 0;
}
