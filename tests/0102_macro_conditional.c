/*
   Test 0102: Conditional Compilation
   Description: Including code based on flags.
   Focus: #ifdef, #ifndef, #endif.
*/
#include <stdio.h>

#define DEBUG_MODE

int main() {
    printf("Start program.\n");
    
#ifdef DEBUG_MODE
    printf("Debug: Variable tracking active.\n");
#endif

#ifndef RELEASE_MODE
    printf("Not in release mode.\n");
#endif

    return 0;
}
