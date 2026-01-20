/*
   Test 0190: Digraphs
   Description: Alternative tokens.
   Focus: <:, :>, <%, %>.
*/
#include <stdio.h>

int main() <%
    int arr<:5:> = <% 1, 2, 3, 4, 5 %>;
    printf("Val: %d\n", arr<:0:>);
    return 0;
%>
