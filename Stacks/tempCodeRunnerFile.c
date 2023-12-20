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
    stack[++top] = value;
    printf("%d pushed to stack.\n", value);
}

void pop() {
    if (isEmpty()) {
        printf("Stack Underflow: Cannot pop element, stack is empty.\n");
        return;
    }
    printf("Popped element: %d\n", stack[top--]);
}

int peek() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return -1; // Signify an empty stack or handle differently as needed.
    }
    return stack[top];
}

void displayStack() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Elements in the stack: ");
    for (int i = top; i >= 0; --i) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display all elements\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                value = peek();
                if (value != -1) {
                    printf("Top element of stack: %d\n", value);
                }
                break;
            case 4:
                displayStack();
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}
