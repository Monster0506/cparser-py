/*
   Test 0184: Zero Length Array
   Description: Creating variable length structs (GNU Ext).
   Focus: member[0].
*/
#include <stdio.h>
#include <stdlib.h>

struct Packet {
    int size;
    char payload[0]; // GNU extension
};

int main() {
    int pay_len = 50;
    struct Packet *p = malloc(sizeof(struct Packet) + pay_len);
    p->size = pay_len;
    
    printf("Allocated packet with payload.\n");
    free(p);
    return 0;
}
