/*
   Test 0061: Enum in Switch
   Description: Using enums for state machines.
   Focus: switch-case with enums.
*/
#include <stdio.h>

typedef enum {
    STATE_IDLE,
    STATE_RUNNING,
    STATE_PAUSED,
    STATE_STOPPED
} AppState;

int main() {
    AppState current_state = STATE_RUNNING;
    
    switch (current_state) {
        case STATE_IDLE:
            printf("Waiting...\n");
            break;
        case STATE_RUNNING:
            printf("Processing data...\n");
            break;
        case STATE_PAUSED:
            printf("Resuming soon.\n");
            break;
        case STATE_STOPPED:
            printf("Terminated.\n");
            break;
    }
    
    return 0;
}
