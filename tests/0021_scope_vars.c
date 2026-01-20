/*
   Test 0021: Variable Scope
   Description: Understanding local vs global variables.
   Focus: Scope, shadowing.
*/
#include <stdio.h>

int global_counter = 0;

void increment_global() {
    global_counter++;
}

int main() {
    int local_var = 10;
    
    printf("Global before: %d\n", global_counter);
    increment_global();
    printf("Global after: %d\n", global_counter);
    
    {
        // Shadowing
        int global_counter = 500;
        printf("Shadowed global inside block: %d\n", global_counter);
    }
    
    printf("Global outside block: %d\n", global_counter);
    return 0;
}
