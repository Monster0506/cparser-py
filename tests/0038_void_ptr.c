/*
   Test 0038: Void Pointers
   Description: Generic pointers.
   Focus: void*, casting back.
*/
#include <stdio.h>

void print_generic(void *ptr, char type) {
    if (type == 'i') {
        printf("Int: %d\n", *(int*)ptr);
    } else if (type == 'f') {
        printf("Float: %.2f\n", *(float*)ptr);
    }
}

int main() {
    int i = 10;
    float f = 5.5;
    
    print_generic(&i, 'i');
    print_generic(&f, 'f');
    
    return 0;
}
