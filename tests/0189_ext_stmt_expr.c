/*
   Test 0189: Statement Expr
   Description: Block returning a value.
   Focus: ({ ... }).
*/
#include <stdio.h>

int main() {
    int result = ({
        int a = 5;
        int b = 10;
        a + b;
    });
    
    printf("Result: %d\n", result);
    return 0;
}
