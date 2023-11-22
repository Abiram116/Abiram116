#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct student {
    int id;
    char name[100];
    float fees;
    char branch[50]; // Increased size to accommodate longer branch names
};

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    struct student arr[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter Student details:\nID: ");
        scanf("%d", &arr[i].id);
        
        printf("Name: ");
        scanf("%s", arr[i].name);
        
        printf("Fees: ");
        scanf("%f", &arr[i].fees);
        
        printf("Branch: ");
        scanf("%s", arr[i].branch);
    }

    printf("\n\nStudent Details:\n");
    for (int i = 0; i < n; i++)
        printf("ID:%d \t Name:%s \t Fees:%f \t Branch:%s\n", arr[i].id, arr[i].name, arr[i].fees, arr[i].branch);

    return 0;
}
