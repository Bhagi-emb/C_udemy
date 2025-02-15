#include <stdio.h>
#include <string.h>

// Define a structure named Person
struct Person {
    char name[50];
    int age;
};

int main() {
    // Create an instance of Person and initialize it
    struct Person person1;
    strcpy(person1.name, "Alice");
    person1.age = 30;

    // Declare a pointer to a struct Person and point it to person1
    struct Person *ptr = &person1;

    // Access structure members using the pointer (arrow operator)
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);

    // Modify the structure member via the pointer
    ptr->age = 35;
    printf("\nAfter modification:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);

    // Alternatively, using dereference operator and dot notation:
    printf("\nAccess using (*ptr).member notation:\n");
    printf("Name: %s\n", (*ptr).name);
    printf("Age: %d\n", (*ptr).age);

    return 0;
}
