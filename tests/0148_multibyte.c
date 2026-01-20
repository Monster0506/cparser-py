/*
   Test 0148: Multibyte Conversion
   Description: Converting char* to wchar_t*.
   Focus: mbstowcs.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *mb = "Hello";
    wchar_t wc[10];
    
    mbstowcs(wc, mb, 10);
    wprintf(L"Converted: %ls\n", wc);
    return 0;
}
