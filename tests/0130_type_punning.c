/*
   Test 0130: Type Punning
   Description: Reading float bits as int via union.
   Focus: Union casting trick.
*/
#include <stdio.h>

union Pun {
    float f;
    unsigned int i;
};

int main() {
    union Pun p;
    p.f = 3.14159f;
    
    printf("Float: %f\n", p.f);
    printf("Hex representation: 0x%X\n", p.i);
    return 0;
}
