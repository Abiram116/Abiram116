#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 10

int que[MAX_SIZE];
int rear = -1;
int front = -1;

bool isEmpty() {
    return (front == -1 && rear == -1);
}

bool isFull() {
    return ((rear + 1) % MAX_SIZE == front);
}

void enque(int value) {
    if (isFull()) {
        printf("Queue Overflow: Cannot enqueue element, queue is full.\n");
        return;
    } else {
        if (isEmpty()) {
            front = 0; // Update front if the queue is empty
        }
        rear = (rear + 1) % MAX_SIZE; // Circularly move rear
        que[rear] = value;
        printf("%d enqueued to queue.\n", value);
    }
}

void deque() {
    if (isEmpty()) {
        printf("Queue Underflow: Cannot dequeue element, queue is empty.\n");
        return;
    } else {
        printf("Dequeued element: %d\n", que[front]);
        if (front == rear) {
            // Reset front and rear when the last element is dequeued
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE; // Circularly move front
        }
    }
}

int front1() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return -1; // Return -1 to signify an empty queue or handle differently as needed.
    }
    return que[front];
}

int rear1() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return -1; // Return -1 to signify an empty queue or handle differently as needed.
    }
    return que[rear];
}

int main() {
    enque(10);
    enque(20);
    enque(30);

    printf("Front element of queue: %d\n", front1());
    printf("Rear element of queue: %d\n", rear1());

    deque();
    printf("Front element of queue after dequeue: %d\n", front1());
    return 0;
}
