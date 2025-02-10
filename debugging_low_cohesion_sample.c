/*
A low-cohesion module in C might contain functions that are unrelated or only loosely related.
It can be harder to understand, maintain, and extend because the functions serve different purposes,
which are not closely related to each other.
*/

// Low Cohesion: Unrelated functions in a single file

#include <stdio.h>
#include <stdlib.h>

// Function to calculate the sum of two numbers
int add(int a, int b) {
    return a + b;
}

// Function to handle user input
void getInput() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
}

// Function to print a message
void printMessage() {
    printf("Hello, World!\n");
}

// Function to create a new file
void createFile(const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file != NULL) {
        fprintf(file, "This is a new file.\n");
        fclose(file);
    } else {
        printf("Error creating file.\n");
    }
}


int main()
{

    return 0;
}

/*
In the example above, 
the functions add, getInput, printMessage, and createFile perform different, unrelated tasks.
These functions should be in separate modules because they have low cohesion. 
If you wanted to modify or extend any of these functionalities, 
it would be difficult because they are grouped together in an unrelated manner.
*/