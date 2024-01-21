#include <stdio.h>

int main() {
    FILE *file_pointer;

    // Open a file in write mode ("w") - creates a new file if it doesn't exist
    file_pointer = fopen("example.txt", "w");

    if (file_pointer == NULL) {
        printf("File could not be opened.\n");
        return 1;
    } else {
        printf("File opened successfully!\n");
        // Perform operations like writing, reading, etc.
    }

    // Assuming file_pointer is already obtained through fopen()

// Writing to a file using fprintf()
fprintf(file_pointer, "This is a sample text.\n");
// Assuming file_pointer is already obtained through fopen()

char data[100]; // Buffer to store the read data

// Reading from a file using fscanf()
fscanf(file_pointer, "%s", data);

    // Remember to close the file when done
    fclose(file_pointer);
    return 0;
}
