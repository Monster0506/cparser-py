/*
   Test 0181: Quine
   Description: Program that prints its own source.
   Focus: Cheating slightly for readability, but concept holds.
*/
#include <stdio.h>
char* s="#include <stdio.h>%cchar* s=%c%s%c;%cint main(){printf(s,10,34,s,34,10);return 0;}";
int main(){printf(s,10,34,s,34,10);return 0;}
