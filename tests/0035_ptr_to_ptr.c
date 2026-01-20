/*
   Test 0035: Pointer to Pointer
   Description: Pointers that point to other pointers.
   Focus: **ptr.
*/
#include <stdio.h>

int main() {
    int val = 500;
    int *p = &val;
    int **pp = &p;
    
    printf("Val: %d\n", val);
    printf("*p: %d\n", *p);
    printf("**pp: %d\n", **pp);
    
    return 0;
}
