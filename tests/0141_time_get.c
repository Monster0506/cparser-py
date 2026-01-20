/*
   Test 0141: Get Current Time
   Description: accessing system time.
   Focus: <time.h> time().
*/
#include <stdio.h>
#include <time.h>

int main() {
    time_t now;
    time(&now);
    printf("Seconds since epoch: %ld\n", (long)now);
    return 0;
}
