//define a structure Book having title,author,price and also quantity order. Create a array of n books information. Display the total bill amount.
#include <stdio.h>

// Structure definition for a book
struct Book {
    char title[100];
    char author[100];
    float price;
    int quantity;
};

int main() {
    int n; // Number of books
    float totalBill = 0.0;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    // Create an array of n books
    struct Book books[n];

    // Input book information
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]s", books[i].title);
        printf("Author: ");
        scanf(" %[^\n]s", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
        printf("Quantity: ");
        scanf("%d", &books[i].quantity);

        // Calculate the total bill amount for each book
        totalBill += (books[i].price * books[i].quantity);
    }

    // Displaying the total bill amount
    printf("\nTotal Bill Amount: ₹%.2f\n", totalBill);

    return 0;
}
