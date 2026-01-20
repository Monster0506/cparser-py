/*
   Test 0158: At Exit
   Description: Registering cleanup functions.
   Focus: atexit.
*/
#include <stdio.h>
#include <stdlib.h>

void cleanup() {
    printf("Cleanup called.\n");
}

int main() {
    atexit(cleanup);
    printf("Main finishing.\n");
    return 0;
}
