/*
   Test 0074: Binary Write
   Description: Writing raw structs to disk.
   Focus: fwrite, "wb".
*/
#include <stdio.h>

typedef struct {
    int id;
    float val;
} Record;

int main() {
    Record r = {101, 45.5f};
    
    FILE *f = fopen("data.bin", "wb");
    if (!f) return 1;
    
    fwrite(&r, sizeof(Record), 1, f);
    
    fclose(f);
    return 0;
}
