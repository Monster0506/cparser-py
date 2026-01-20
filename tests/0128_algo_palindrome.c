/*
   Test 0128: Palindrome Check
   Description: String palindrome check.
   Focus: String indexing.
*/
#include <stdio.h>
#include <string.h>

int is_palindrome(char *str) {
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l) {
        if (str[l++] != str[h--]) return 0;
    }
    return 1;
}

int main() {
    char *s1 = "abbba";
    char *s2 = "hello";
    printf("%s: %d\n", s1, is_palindrome(s1));
    printf("%s: %d\n", s2, is_palindrome(s2));
    return 0;
}
