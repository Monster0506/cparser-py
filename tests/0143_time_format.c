/*
   Test 0143: Time Formatting
   Description: Printing human readable dates.
   Focus: ctime, strftime.
*/
#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    char buf[64];
    
    printf("Standard: %s", ctime(&t));
    
    strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", tm);
    printf("Custom: %s\n", buf);
    return 0;
}
