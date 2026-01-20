/*
   Test 0179: Container Of
   Description: Getting struct start from member ptr.
   Focus: Pointer arithmetic reverse logic (Linux kernel style).
*/
#include <stdio.h>
#include <stddef.h>

#define container_of(ptr, type, member) \
    ((type *)((char *)(ptr) - offsetof(type, member)))

struct Object {
    int id;
    int value;
};

int main() {
    struct Object obj = {10, 20};
    int *v_ptr = &obj.value;
    
    struct Object *bm = container_of(v_ptr, struct Object, value);
    
    printf("Recovered ID: %d\n", bm->id);
    return 0;
}
