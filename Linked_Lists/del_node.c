#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
};

struct Node *head = NULL;

void display();
void create();
void deletion(int);

int main() {
    int dataToDelete;

    create();
    display();

    printf("Enter the data you want to delete: ");
    scanf("%d", &dataToDelete);
    
    deletion(dataToDelete);
    display();

    return 0;
}

void display() {
    struct Node *temp = head;

    printf("\nThe Linked list is:\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

void create() {
    struct Node *newNode, *temp;
    int data, choice;

    do {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->link = NULL;

        printf("Enter data for the new node: ");
        scanf("%d", &data);
        newNode->data = data;

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->link = newNode;
            temp = temp->link;
        }

        printf("Do you want to create another node? (1 to continue, 0 to stop): ");
        scanf("%d", &choice);
    } while (choice != 0);
}

void deletion(int dataToDelete) {
    struct Node *temp, *prev;

    if (head == NULL) {
        printf("List is empty. Deletion not possible.\n");
        return;
    }

    if (head->data == dataToDelete) {
        temp = head;
        head = head->link;
        free(temp);
        printf("Data deleted successfully.\n");
        return;
    }

    temp = head->link;
    prev = head;

    while (temp != NULL) {
        if (temp->data == dataToDelete) {
            prev->link = temp->link;
            free(temp);
            printf("Data deleted successfully.\n");
            return;
        } else {
            temp = temp->link;
            prev = prev->link;
        }
    }

    printf("Data not found. Deletion not possible.\n");
}
