/*
   Test 0067: Void Context in Callbacks
   Description: Passing user data through callbacks.
   Focus: void* context pattern.
*/
#include <stdio.h>

typedef void (*Handler)(int data, void *ctx);

void run_handler(int val, Handler h, void *ctx) {
    h(val, ctx);
}

void my_handler(int val, void *ctx) {
    int *multiplier = (int*)ctx;
    printf("Result: %d\n", val * (*multiplier));
}

int main() {
    int factor = 5;
    run_handler(10, my_handler, &factor);
    
    factor = 10;
    run_handler(10, my_handler, &factor);
    
    return 0;
}
