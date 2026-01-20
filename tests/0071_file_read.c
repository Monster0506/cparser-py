/*
   Test 0071: File Read (Basic)
   Description: Reading strings/vars from file.
   Focus: fopen, fscanf.
*/
#include <stdio.h>

int main() {
    // Ideally ensure 0070 ran first or file exists
    FILE *f = fopen("output.txt", "r");
    if (!f) return 1;
    
    char word[50];
    char word2[50];
    
    fscanf(f, "%s %s", word, word2); // Reads "Hello" "File!"
    printf("Read: %s %s\n", word, word2);
    
    fclose(f);
    return 0;
}
