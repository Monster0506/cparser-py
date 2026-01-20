/*
   Test 0137: Signal Handling
   Description: Catching signals like INT.
   Focus: <signal.h>.
*/
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void handle_sig(int sig) {
    printf("Caught signal %d\n", sig);
    exit(0);
}

int main() {
    signal(SIGINT, handle_sig); // Catch Ctrl+C
    
    // Infinite loop waiting for signal (simulated for test)
    printf("Raising INT signal...\n");
    raise(SIGINT);
    
    return 0;
}
