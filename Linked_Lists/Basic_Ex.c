#include<stdio.h>
#include<stdlib.h>

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

int main() {
    // Create the linked list
    struct Node* head = create();

    // Display the linked list elements
    printf("Linked list elements: ");
    display(head);

    return 0;
}
