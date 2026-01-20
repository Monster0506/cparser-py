/*
   Test 0062: Enum Custom Values
   Description: Enums with explicit integer values.
   Focus: assigning specific values.
*/
#include <stdio.h>

enum HttpCode {
    OK = 200,
    NOT_FOUND = 404,
    SERVER_ERROR = 500
};

int main() {
    enum HttpCode response = NOT_FOUND;
    
    printf("Response Code: %d\n", response);
    
    if (response == 404) {
        printf("Error: Page missing.\n");
    }
    
    return 0;
}
