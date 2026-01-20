/*
   Test 0050: Struct Definition
   Description: Defining and initializing a basic struct.
   Focus: struct syntax, member access.
*/
#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person p1;
    
    // Manual member assignment
    strcpy(p1.name, "Alice");
    p1.age = 30;
    p1.height = 1.70;
    
    // Initializer list
    struct Person p2 = {"Bob", 25, 1.82};
    
    printf("%s is %d years old.\n", p1.name, p1.age);
    printf("%s is %d years old.\n", p2.name, p2.age);
    
    return 0;
}
