/*
   Test 0054: Pointers to Structs
   Description: Accessing structs via pointers.
   Focus: -> operator.
*/
#include <stdio.h>

struct Config {
    int id;
    int active;
};

int main() {
    struct Config cfg = {500, 1};
    struct Config *ptr = &cfg;
    
    // Dot operator (requires dereference first)
    printf("ID via dot: %d\n", (*ptr).id);
    
    // Arrow operator (idiomatic)
    printf("ID via arrow: %d\n", ptr->id);
    
    return 0;
}
