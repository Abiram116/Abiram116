#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// #define INT_MAX = 0
// #define INT_MIN = 0
// Define a node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to display the linked list elements
void display(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to create nodes and add them to the linked list
struct Node* create() {
    struct Node* head = NULL;
    struct Node* temp = NULL;
    int x, choice;

    do {
        printf("Enter data for the new node: ");
        scanf("%d", &x);

        // Create a new node
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        if (newNode == NULL) {
            printf("Memory allocation failed!\n");
            exit(1);
        }

        newNode->data = x;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }

        printf("Do you want to create another node? (1/0): ");
        scanf("%d", &choice);
    } while (choice != 0);

    return head;
}

// Function to count the number of nodes in the linked list
int countNodes(struct Node* head) {
    int count = 0;
    struct Node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
}

// Function to find the sum of all nodes' data in the linked list
int findSum(struct Node* head) {
    int sum = 0;
    struct Node* temp = head;

    while (temp != NULL) {
        sum += temp->data;
        temp = temp->next;
    }

    return sum;
}

// Function to find the average of all nodes' data in the linked list
float findAverage(struct Node* head) {
    int count = countNodes(head);
    int sum = findSum(head);

    if (count == 0) {
        return 0; // To avoid division by zero
    }

    return (float)sum / count;
}

// Find minimum and maximum  of all nodes' data in the linked list
void findMinMax(struct Node* head, int *minimum, int *maximum) {
    *minimum = INT_MAX;
    *maximum = INT_MIN;
    struct Node* temp = head;
    while (temp != NULL) {
        if (*minimum > temp->data) {
            *minimum = temp->data;
        }
            else if (*maximum < temp->data) {
                *maximum = temp->data;
            }
                temp = temp->next;
    }
}

int main() {
    // Create the linked list
    struct Node* head = create();

    // Display the linked list elements
    printf("Linked list elements: ");
    display(head);

    // Count nodes, find sum, and calculate average
    int nodeCount = countNodes(head);
    int sum = findSum(head);
    float average = findAverage(head);

    printf("Number of nodes: %d\n", nodeCount);
    printf("Sum of nodes' data: %d\n", sum);
    printf("Average of nodes' data: %.2f\n", average);

    return 0;
    printf("\nhello");
}