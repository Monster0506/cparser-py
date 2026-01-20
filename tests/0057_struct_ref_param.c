/*
   Test 0057: Struct as Function Param (Reference)
   Description: Passing a struct pointer allows modification.
   Focus: efficient passing, mutation.
*/
#include <stdio.h>

typedef struct {
    int val;
} Box;

void modify_box_ptr(Box *b) {
    b->val = 999;
    printf("Inside function: %d\n", b->val);
}

int main() {
    Box myBox = {10};
    modify_box_ptr(&myBox);
    printf("Inside main: %d (Changed)\n", myBox.val);
    return 0;
}
