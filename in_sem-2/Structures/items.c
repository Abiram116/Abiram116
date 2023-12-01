//define a structure Item having ID,name,unit of measurement and price. Find number of item whose unit of measurement is literrs
#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 50 // Maximum number of items

// Structure definition for an item
struct Item {
    int ID;
    char name[100];
    char unit[4];
    float price;
};

int main() {
    int n; // Number of items
    int litersCount = 0;

    printf("Enter the number of items: ");
    scanf("%d", &n);

    // Create an array of items
    struct Item items[MAX_ITEMS];

    // Input item information
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Item %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &items[i].ID);
        printf("Name: ");
        scanf(" %[^\n]s", items[i].name);
        printf("Unit of measurement: ");
        scanf(" %[^\n]s", items[i].unit);
        printf("Price: ");
        scanf("%f", &items[i].price);

        // Check if the unit of measurement is "liters"
        if (strcmp(items[i].unit, "l") == 0) {
            litersCount++;
        }
    }

    // Displaying the number of items measured in liters
    printf("\nNumber of items measured in liters: %d\n", litersCount);

    return 0;
}
