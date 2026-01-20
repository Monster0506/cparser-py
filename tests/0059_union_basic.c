/*
   Test 0059: Union Basics
   Description: Memory sharing between members.
   Focus: union vs struct, size.
*/
#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    
    printf("Memory size occupied by data: %zu\n", sizeof(data));

    data.i = 10;
    printf("data.i: %d\n", data.i);
    
    data.f = 220.5;
    printf("data.f: %.2f\n", data.f);
    printf("data.i (corrupted): %d\n", data.i);
    
    strcpy(data.str, "C Programming");
    printf("data.str: %s\n", data.str);

    return 0;
}
