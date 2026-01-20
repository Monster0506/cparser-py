/*
   Test 0168: No Return
   Description: Marking functions that don't return.
   Focus: _Noreturn.
*/
#include <stdio.h>
#include <stdlib.h>

_Noreturn void die(const char *msg) {
    printf("Fatal: %s\n", msg);
    exit(1);
}

int main() {
    die("Goodbye execution flow.");
    return 0; // Unreachable
}
