/*
   Test 0031: Pointer Types
   Description: Pointers to different types.
   Focus: char*, float*, casting (warning).
*/
#include <stdio.h>

int main() {
    char c = 'Z';
    char *pc = &c;
    
    float f = 3.14;
    float *pf = &f;
    
    printf("Char pointer points to: %c\n", *pc);
    printf("Float pointer points to: %.2f\n", *pf);
    
    return 0;
}
