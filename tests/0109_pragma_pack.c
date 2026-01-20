/*
   Test 0109: Pragma
   Description: Compiler directives.
   Focus: #pragma pack (common extension).
*/
#include <stdio.h>

// Normal struct
struct A {
    char c;
    int i; 
};

// Packed struct
#pragma pack(push, 1)
struct B {
    char c;
    int i;
};
#pragma pack(pop)

int main() {
    printf("Size A: %zu\n", sizeof(struct A)); // Usually 8
    printf("Size B: %zu\n", sizeof(struct B)); // Usually 5
    return 0;
}
