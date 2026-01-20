/*
   Test 0048: String Tokenization
   Description: Splitting a string by delimiters.
   Focus: strtok (destructive).
*/
#include <stdio.h>
#include <string.h>

int main() {
    char data[] = "apple,banana,cherry,date";
    const char delimiter[] = ","; // delimiter
    
    printf("Original: %s\n", data);
    printf("Tokens:\n");
    
    char *token = strtok(data, delimiter);
    while (token != NULL) {
        printf("- %s\n", token);
        token = strtok(NULL, delimiter);
    }
    
    return 0;
}
