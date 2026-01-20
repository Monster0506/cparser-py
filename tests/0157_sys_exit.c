/*
   Test 0157: Exit Types
   Description: Standard exit vs fast exit.
   Focus: exit, _Exit.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Normal exit would flush buffers.\n");
    // _Exit(0); // Would typically exit immediately without flush/atexit
    exit(0);
}
