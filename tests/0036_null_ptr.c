/*
   Test 0036: Null Pointers
   Description: Safety checks with NULL.
   Focus: NULL, if(!ptr).
*/
#include <stdio.h>

void check(int *p) {
    if (p == NULL) {
        printf("Pointer is NULL.\n");
    } else {
        printf("Pointer value: %d\n", *p);
    }
}

int main() {
    int val = 5;
    check(&val);
    check(NULL);
    return 0;
}
