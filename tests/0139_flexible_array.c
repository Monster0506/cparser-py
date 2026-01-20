/*
   Test 0139: Flexible Array Member
   Description: Struct ending with [] (C99).
   Focus: Struct with dynamic tail.
*/
#include <stdio.h>
#include <stdlib.h>

struct Packet {
    int id;
    int size;
    char data[]; // Flexible member
};

int main() {
    int data_len = 10;
    struct Packet *p = malloc(sizeof(struct Packet) + data_len);
    
    p->id = 1;
    p->size = data_len;
    for(int i=0; i<data_len; i++) p->data[i] = 'A' + i;
    
    printf("Data[0]: %c\n", p->data[0]);
    
    free(p);
    return 0;
}
