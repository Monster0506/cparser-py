/*
   Test 0188: Computed Goto
   Description: Addressing labels.
   Focus: void *ptr = &&label.
*/
#include <stdio.h>

int main() {
    void *jump_table[] = { &&TARGET_A, &&TARGET_B };
    int idx = 1;
    
    goto *jump_table[idx];
    
TARGET_A:
    printf("A\n");
    return 0;
TARGET_B:
    printf("B\n");
    return 0;
}
