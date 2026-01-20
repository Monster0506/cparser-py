/*
   Test 0147: Wide Strings
   Description: Working with L"strings".
   Focus: wcslen, wcscpy.
*/
#include <stdio.h>
#include <wchar.h>

int main() {
    wchar_t buf[100] = L"Hello";
    
    wprintf(L"Len: %zu\n", wcslen(buf));
    
    return 0;
}
