/*
   Test 0171: Hash Table (Linear Probe)
   Description: Simple hash map.
   Focus: Modulo hashing and collision resolution.
*/
#include <stdio.h>
#define SIZE 10

int hash_arr[SIZE] = {-1}; // -1 empty

void insert(int n) {
    int idx = n % SIZE;
    while(hash_arr[idx] != -1) {
        idx = (idx + 1) % SIZE;
    }
    hash_arr[idx] = n;
}

int main() {
    for(int i=0; i<SIZE; i++) hash_arr[i] = -1;
    
    insert(10);
    insert(20); // Collision 10%10 == 0
    
    printf("Idx 0: %d\n", hash_arr[0]);
    printf("Idx 1: %d\n", hash_arr[1]); // Linear probe landed here
    return 0;
}
