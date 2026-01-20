/*
   Test 0142: Time Difference
   Description: Measuring elapsed time.
   Focus: difftime, clock.
*/
#include <stdio.h>
#include <time.h>

int main() {
    time_t start, end;
    volatile long count = 0;
    
    time(&start);
    for(long i=0; i<100000000; i++) count++;
    time(&end);
    
    printf("Elapsed: %.2f seconds\n", difftime(end, start));
    return 0;
}
