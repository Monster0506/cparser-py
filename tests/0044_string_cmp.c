/*
   Test 0044: String Comparison
   Description: Comparing strings lexicographically.
   Focus: strcmp usage and return values.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Apple";
    char s2[] = "Banana";
    char s3[] = "Apple";
    
    if (strcmp(s1, s2) < 0) {
        printf("%s comes before %s\n", s1, s2);
    }
    
    if (strcmp(s1, s3) == 0) {
        printf("%s is equal to %s\n", s1, s3);
    }
    
    return 0;
}
