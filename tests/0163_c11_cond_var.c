/*
   Test 0163: C11 Cond Var
   Description: Waiting for signals.
   Focus: cnd_t, cnd_signal.
*/
#include <stdio.h>
#include <threads.h>

mtx_t mtx;
cnd_t cv;
int ready = 0;

int worker(void *arg) {
    mtx_lock(&mtx);
    while (!ready) {
        cnd_wait(&cv, &mtx);
    }
    printf("Worker awake!\n");
    mtx_unlock(&mtx);
    return 0;
}

int main() {
    mtx_init(&mtx, mtx_plain);
    cnd_init(&cv);
    
    thrd_t t;
    thrd_create(&t, worker, NULL);
    
    // Work...
    mtx_lock(&mtx);
    ready = 1;
    cnd_signal(&cv);
    mtx_unlock(&mtx);
    
    thrd_join(t, NULL);
    return 0;
}
