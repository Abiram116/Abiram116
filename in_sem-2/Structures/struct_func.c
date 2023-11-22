#include <stdio.h>
#include <string.h>
struct Person {
    char name[50];
    int age;
    float height;
};

void initializePerson(struct Person *person, const char *name, int age, float height) {
    strcpy(person->name, name);
    person->age = age;
    person->height = height;
}

void displayPerson(struct Person person) {
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Height: %.2f\n", person.height);
}

int main() {
    struct Person myPerson;

    initializePerson(&myPerson, "Alice", 25, 165.5);
    displayPerson(myPerson);

    return 0;
}
