#include <stdio.h>
#include <string.h>

// Define a structure named Person
struct Person {
    char *name;
    int *age;
};

int main() {
    // Create an instance of Person and initialize it
    struct Person person1;
    char name[10];
    int age =30;

    strcpy(name, "Alice");
    person1.age = &age;
    person1.name = name;

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", *person1.age);

    // Declare a pointer to a struct Person and point it to person1
    struct Person *ptr = &person1;

    // Access structure members using the pointer (arrow operator)
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", *ptr->age);

    // Modify the structure member via the pointer
    *(ptr->age) = 35;        //ptr->age = 35;
    printf("\nAfter modification:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", *ptr->age); //no ptr->age - even it work

    // Alternatively, using dereference operator and dot notation:
    printf("\nAccess using (*ptr).member notation:\n");
    printf("Name: %s\n", (*ptr).name);
    printf("Age: %d\n", *(*ptr).age);  //NO (*ptr).age) - even it work

    return 0;
}
