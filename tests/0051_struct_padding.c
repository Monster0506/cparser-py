/*
   Test 0051: Struct Padding
   Description: Observing size differences due to alignment.
   Focus: sizeof(struct).
*/
#include <stdio.h>

// Likely padded
struct PackedLoosely {
    char c;
    int i;
    char d;
};

// Better alignment
struct PackedTightly {
    int i;
    char c;
    char d;
};

int main() {
    printf("Size of Loose struct: %zu\n", sizeof(struct PackedLoosely));
    printf("Size of Tight struct: %zu\n", sizeof(struct PackedTightly));
    return 0;
}
