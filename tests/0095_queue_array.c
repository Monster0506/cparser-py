/*
   Test 0095: Queue (Array)
   Description: Circular queue implementation.
   Focus: (index + 1) % MAX.
*/
#include <stdio.h>

#define SIZE 5

typedef struct {
    int items[SIZE];
    int front, rear;
} Queue;

void init(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

void enqueue(Queue *q, int value) {
    if ((q->rear + 1) % SIZE == q->front) {
        printf("Queue Full\n");
    } else {
        if (q->front == -1) q->front = 0;
        q->rear = (q->rear + 1) % SIZE;
        q->items[q->rear] = value;
    }
}

int dequeue(Queue *q) {
    if (q->front == -1) return -1;
    int val = q->items[q->front];
    if (q->front == q->rear) {
        q->front = -1; q->rear = -1;
    } else {
        q->front = (q->front + 1) % SIZE;
    }
    return val;
}

int main() {
    Queue q;
    init(&q);
    enqueue(&q, 1);
    enqueue(&q, 2);
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    return 0;
}
