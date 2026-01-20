/*
   Test 0166: Static Assert
   Description: Compile time assertions.
   Focus: _Static_assert.
*/
#include <stdio.h>

struct Data {
    int id;
    char buffer[100];
};

_Static_assert(sizeof(struct Data) >= 104, "Struct too small");

int main() {
    printf("Passed static assert.\n");
    return 0;
}
