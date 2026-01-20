/*
   Test 0161: C11 Threads
   Description: Basic thread creation.
   Focus: threads.h (C11).
*/
#include <stdio.h>
#include <threads.h>

int run(void *arg) {
    printf("In thread: %d\n", *(int*)arg);
    return 0;
}

int main() {
    thrd_t t;
    int arg = 10;
    
    if (thrd_create(&t, run, &arg) == thrd_success) {
        thrd_join(t, NULL);
        printf("Thread joined.\n");
    }
    
    return 0;
}
