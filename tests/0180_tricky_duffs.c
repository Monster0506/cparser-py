/*
   Test 0180: Duff's Device
   Description: Loop unrolling optimization.
   Focus: Switch case fallthrough inside loop.
*/
#include <stdio.h>

void send(short *to, short *from, int count) {
    int n = (count + 7) / 8;
    switch (count % 8) {
        case 0: do { *to++ = *from++;
        case 7:      *to++ = *from++;
        case 6:      *to++ = *from++;
        case 5:      *to++ = *from++;
        case 4:      *to++ = *from++;
        case 3:      *to++ = *from++;
        case 2:      *to++ = *from++;
        case 1:      *to++ = *from++;
                } while (--n > 0);
    }
}

int main() {
    short src[20] = {0};
    short dst[20] = {0};
    src[0] = 55;
    
    send(dst, src, 10);
    printf("Copied: %d\n", dst[0]);
    return 0;
}
