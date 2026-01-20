/*
   Test 0162: C11 Mutex
   Description: Protecting shared data.
   Focus: mtx_init, mtx_lock.
*/
#include <stdio.h>
#include <threads.h>

mtx_t mutex;
int shared = 0;

int add(void *arg) {
    mtx_lock(&mutex);
    shared++;
    printf("Inc: %d\n", shared);
    mtx_unlock(&mutex);
    return 0;
}

int main() {
    mtx_init(&mutex, mtx_plain);
    
    thrd_t t1, t2;
    thrd_create(&t1, add, NULL);
    thrd_create(&t2, add, NULL);
    
    thrd_join(t1, NULL);
    thrd_join(t2, NULL);
    
    mtx_destroy(&mutex);
    return 0;
}
