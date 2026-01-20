/*
   Test 0052: Nested Structs
   Description: Structs containing other structs.
   Focus: deep member access.
*/
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Event {
    int id;
    struct Date date;
};

int main() {
    struct Event new_year = {1, {1, 1, 2025}};
    
    printf("Event ID: %d\n", new_year.id);
    printf("Date: %02d/%02d/%d\n", 
           new_year.date.month, 
           new_year.date.day, 
           new_year.date.year);
           
    return 0;
}
