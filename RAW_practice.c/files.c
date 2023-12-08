#include <stdio.h>

int main() {
    FILE *file_pointer;
    file_pointer = fopen("output.txt", "r"); // Opens a file in write mode

    if (file_pointer != NULL) {
        printf("File opened successfully\n");
        fclose(file_pointer); // Close the file
    } else {
        printf("Error opening the file.\n");
    }

    return 0;
}
