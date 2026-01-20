/*
   Test 0186: Constructor
   Description: Function running before main.
   Focus: __attribute__((constructor)).
*/
#include <stdio.h>

void __attribute__((constructor)) init() {
    printf("Pre-main init.\n");
}

void __attribute__((destructor)) cleanup() {
    printf("Post-main cleanup.\n");
}

int main() {
    printf("Inside Main.\n");
    return 0;
}
