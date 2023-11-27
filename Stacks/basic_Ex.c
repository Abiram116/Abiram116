#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX_SIZE - 1;
}

void push(int value) {
    if (isFull()) {
        printf("Stack Overflow: Cannot push element, stack is full.\n");
        return;
    }
    top++;
    stack[top] = value;
    printf("%d pushed to stack.\n", value);
}

void pop() {
    if (isEmpty()) {
        printf("Stack Underflow: Cannot pop element, stack is empty.\n");
        return;
    }
    printf("Popped element: %d\n", stack[top]);
    top--;
}

int peek() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return -1; // Return -1 to signify an empty stack or handle differently as needed.
    }
    return stack[top];
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("Top element of stack: %d\n", peek());

    pop();
    printf("Top element of stack after pop: %d\n", peek());

    return 0;
}
