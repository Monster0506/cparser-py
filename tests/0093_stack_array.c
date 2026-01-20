/*
   Test 0093: Stack (Fixed Array)
   Description: Simple stack implementation using array.
   Focus: push/pop logic, bounds checking.
*/
#include <stdio.h>

#define MAX 100

typedef struct {
    int items[MAX];
    int top;
} Stack;

void init(Stack *s) { s->top = -1; }

void push(Stack *s, int val) {
    if (s->top < MAX - 1) {
        s->items[++(s->top)] = val;
    } else {
        printf("Stack Overflow\n");
    }
}

int pop(Stack *s) {
    if (s->top >= 0) {
        return s->items[(s->top)--];
    }
    printf("Stack Underflow\n");
    return -1;
}

int main() {
    Stack s;
    init(&s);
    push(&s, 10);
    push(&s, 20);
    printf("Popped: %d\n", pop(&s));
    printf("Popped: %d\n", pop(&s));
    return 0;
}
