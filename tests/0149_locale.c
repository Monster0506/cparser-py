/*
   Test 0149: Locale
   Description: Setting locale settings.
   Focus: <locale.h>.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    // Behavior depends on system config, but code path is standard
    printf("Locale set.\n");
    return 0;
}
