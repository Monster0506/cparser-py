/*
   Test 0191: Const Cast
   Description: Modifying const data via cast.
   Focus: Casting away constness (unsafe).
*/
#include <stdio.h>

void bad_func(const int *p) {
    int *mod = (int*)p;
    *mod = 999;
}

int main() {
    int x = 10;
    bad_func(&x);
    printf("X modified: %d\n", x);
    return 0;
}
