#include <stdio.h>

// Define the structure for storing movie information
struct Movie {
    char Movie_Name[100];
    int year_of_release;
    char Director[100];
    char Language[50];
    float rating;
};

int main() {
    // Declare a variable of type Movie
    struct Movie Mymovie;

    // Prompt the user to enter movie details
    printf("Enter Movie Name: ");
    scanf("%99[^\n]%*c", Mymovie.Movie_Name);

    printf("Enter Year of Release: ");
    scanf("%d", &Mymovie.year_of_release);

    printf("Enter Director Name: ");
    scanf("%99[^\n]%*c", Mymovie.Director);

    printf("Enter Language: ");
    scanf("%49[^\n]%*c", Mymovie.Language);

    printf("Enter Rating (out of 10): ");
    scanf("%f", &Mymovie.rating);

    // Display the entered movie details
    printf("\nMovie Details:\n");
    printf("Movie Name: %s\n", Mymovie.Movie_Name);
    printf("Year of Release: %d\n", Mymovie.year_of_release);
    printf("Director: %s\n", Mymovie.Director);
    printf("Language: %s\n", Mymovie.Language);
    printf("Rating: %.2f/10\n", Mymovie.rating);

    return 0;
}
