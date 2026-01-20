/*
   Test 0056: Struct as Function Param (Value)
   Description: Passing a struct by value copies it.
   Focus: value separation.
*/
#include <stdio.h>

typedef struct {
    int val;
} Box;

void modify_box(Box b) {
    b.val = 999;
    printf("Inside function: %d\n", b.val);
}

int main() {
    Box myBox = {10};
    modify_box(myBox);
    printf("Inside main: %d (Unchanged)\n", myBox.val);
    return 0;
}
