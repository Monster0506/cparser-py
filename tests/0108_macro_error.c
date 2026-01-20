/*
   Test 0108: Error Directive
   Description: Failing compilation intentionally.
   Focus: #error (conditional).
*/
#include <stdio.h>

// #define CHECK_FAIL

#ifdef CHECK_FAIL
#error "Compilation stopped by user check."
#endif

int main() {
    printf("Compiled successfully.\n");
    return 0;
}
