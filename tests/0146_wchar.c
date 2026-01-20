/*
   Test 0146: Wide Characters
   Description: Working with wchar_t.
   Focus: <wchar.h>.
*/
#include <stdio.h>
#include <wchar.h>

int main() {
    wchar_t w = L'Ω';
    wprintf(L"Wide char: %lc\n", w);
    return 0;
}
