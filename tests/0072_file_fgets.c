/*
   Test 0072: Read Line by Line
   Description: Reading full keys safely.
   Focus: fgets.
*/
#include <stdio.h>

int main() {
    FILE *f = fopen("output.txt", "r");
    if (!f) return 1;
    
    char buffer[100];
    while(fgets(buffer, sizeof(buffer), f) != NULL) {
        printf("Line: %s", buffer);
    }
    
    fclose(f);
    return 0;
}
