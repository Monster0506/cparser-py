/*
   Test 0105: Include Guards
   Description: Simulating header guard protection.
   Focus: #ifndef HEADER_H ...
*/
#include <stdio.h>

#ifndef MY_HEADER_H
#define MY_HEADER_H

struct Config {
    int id;
};

#endif

// Re-including should be ignored
#ifndef MY_HEADER_H
#define MY_HEADER_H
struct Config { int id; }; // Error if not guarded
#endif

int main() {
    struct Config c = {1};
    printf("Config ID: %d\n", c.id);
    return 0;
}
