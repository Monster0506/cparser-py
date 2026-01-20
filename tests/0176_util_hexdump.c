/*
   Test 0176: Hex Dump
   Description: Printing memory representation.
   Focus: casting to unsigned char*.
*/
#include <stdio.h>

void hex_dump(void *ptr, int len) {
    unsigned char *p = (unsigned char*)ptr;
    for(int i=0; i<len; i++) {
        printf("%02X ", p[i]);
        if((i+1)%8==0) printf("\n");
    }
    printf("\n");
}

int main() {
    int arr[] = {0xAABBCCDD, 0x11223344};
    hex_dump(arr, sizeof(arr));
    return 0;
}
