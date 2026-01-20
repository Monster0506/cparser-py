/*
   Test 0197: HTTP Response
   Description: Building HTTP header string.
   Focus: String formatting.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char response[512];
    char *body = "<h1>Hello</h1>";
    
    sprintf(response, 
            "HTTP/1.1 200 OK\r\n"
            "Content-Type: text/html\r\n"
            "Content-Length: %zu\r\n"
            "\r\n"
            "%s", strlen(body), body);
            
    printf("%s\n", response);
    return 0;
}
