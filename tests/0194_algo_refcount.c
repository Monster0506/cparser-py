/*
   Test 0194: Ref Counting
   Description: Basic garbage collection logic.
   Focus: retain/release patterns.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int ref_count;
    int data;
} Obj;

Obj* create(int data) {
    Obj *o = (Obj*)malloc(sizeof(Obj));
    o->data = data;
    o->ref_count = 1;
    return o;
}

void retain(Obj *o) {
    o->ref_count++;
}

void release(Obj *o) {
    o->ref_count--;
    if (o->ref_count == 0) {
        printf("Freeing %d\n", o->data);
        free(o);
    }
}

int main() {
    Obj *o = create(100);
    retain(o);
    release(o); // Count 1
    release(o); // Count 0, free
    return 0;
}
