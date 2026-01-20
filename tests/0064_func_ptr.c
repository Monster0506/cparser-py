/*
   Test 0064: Function Pointers
   Description: Storing address of a function.
   Focus: function pointer syntax.
*/
#include <stdio.h>

void say_hello() {
    printf("Hello!\n");
}

void say_goodbye() {
    printf("Goodbye!\n");
}

int main() {
    void (*func_ptr)();
    
    func_ptr = say_hello;
    func_ptr();
    
    func_ptr = say_goodbye;
    func_ptr();
    
    return 0;
}
