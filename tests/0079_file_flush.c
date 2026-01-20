/*
   Test 0079: Buffer Flush
   Description: Forcing write to disk.
   Focus: fflush.
*/
#include <stdio.h>
#include <unistd.h> // for sleep

int main() {
    printf("Processing...");
    fflush(stdout); // Try commenting this out to see difference in some terms
    
    // sleep(1);
    
    printf("Done.\n");
    return 0;
}
