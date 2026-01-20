/*
   Test 0196: JSON Parse (Tiny)
   Description: Parsing {"key": 1} style simple JSON.
   Focus: String scanning.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void parse_json(char *json) {
    char key[50];
    int val;
    
    // Very naive scan
    if (sscanf(json, "{\"%[^\"]\": %d}", key, &val) == 2) {
        printf("Key: %s, Val: %d\n", key, val);
    }
}

int main() {
    parse_json("{\"score\": 100}");
    return 0;
}
