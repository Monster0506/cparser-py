/*
   Test 0175: Circular Buffer
   Description: Ring buffer for data streams.
   Focus: Modulo arithmetic for read/write heads.
*/
#include <stdio.h>

#define CAP 5
int buf[CAP];
int head = 0, tail = 0;

void write(int v) {
    buf[head] = v;
    head = (head + 1) % CAP;
}

int read() {
    int v = buf[tail];
    tail = (tail + 1) % CAP;
    return v;
}

int main() {
    write(1); write(2); write(3);
    printf("Read: %d\n", read());
    write(4); write(5); write(6); // Overwrites 2 if full logic not handled
    
    printf("Head: %d, Tail: %d\n", head, tail);
    return 0;
}
