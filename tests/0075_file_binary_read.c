/*
   Test 0075: Binary Read
   Description: Reading raw structs.
   Focus: fread, "rb".
*/
#include <stdio.h>

typedef struct {
    int id;
    float val;
} Record;

int main() {
    Record r;
    
    FILE *f = fopen("data.bin", "rb");
    if (!f) return 1;
    
    fread(&r, sizeof(Record), 1, f);
    
    printf("Read ID: %d, Val: %.1f\n", r.id, r.val);
    
    fclose(f);
    return 0;
}
