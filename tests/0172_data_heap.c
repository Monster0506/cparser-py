/*
   Test 0172: Heap (Max)
   Description: Array based binary heap.
   Focus: Parent/Child index calculations.
*/
#include <stdio.h>

// Parent: (i-1)/2, Left: 2*i + 1, Right: 2*i + 2
int heap[100];
int n = 0;

void push(int val) {
    int i = n++;
    heap[i] = val;
    
    // Bubble up
    while(i > 0) {
        int p = (i - 1) / 2;
        if (heap[p] < heap[i]) {
            int t = heap[p]; heap[p] = heap[i]; heap[i] = t;
            i = p;
        } else break;
    }
}

int main() {
    push(10);
    push(30);
    push(20);
    
    printf("Root (Max): %d\n", heap[0]);
    return 0;
}
