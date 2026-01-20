/*
   Test 0193: Large Math (Sim)
   Description: Struct based 128 bit int.
   Focus: Multi-word arithmetic.
*/
#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint64_t low;
    uint64_t high;
} uint128_sim;

uint128_sim add(uint128_sim a, uint128_sim b) {
    uint128_sim res;
    res.low = a.low + b.low;
    // Check carry
    res.high = a.high + b.high + (res.low < a.low);
    return res;
}

int main() {
    uint128_sim a = {0xFFFFFFFFFFFFFFFF, 0};
    uint128_sim b = {1, 0};
    uint128_sim c = add(a, b);
    
    printf("High: %llu, Low: %llu\n", c.high, c.low);
    return 0;
}
