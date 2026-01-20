/*
   Test 0132: Restrict Keyword (C99)
   Description: Optimizing pointer access.
   Focus: restrict qualifier.
*/
#include <stdio.h>

// restrict tells compiler ptrs don't alias
void update(int *restrict a, int *restrict b, int *restrict c) {
    *a += *c;
    *b += *c;
}

int main() {
    int x = 1, y = 2, z = 3;
    update(&x, &y, &z);
    printf("%d %d %d\n", x, y, z);
    return 0;
}
