/*
   Test 0154: Temp File
   Description: Creating temporary files.
   Focus: tmpfile().
*/
#include <stdio.h>

int main() {
    FILE *t = tmpfile();
    if (t) {
        fprintf(t, "Temp data");
        rewind(t);
        char buf[20];
        fgets(buf, 20, t);
        printf("Read from temp: %s\n", buf);
        fclose(t); // Auto deleted
    }
    return 0;
}
