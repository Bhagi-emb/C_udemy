/*
this is an example for constant datatype and define
*/

#include <stdio.h>

// Using #define for constants
#define MAX_VALUE 100           //once assigned cannot be changed 
#define MIN_VALUE 0

// Using enum for constants  //once assigned cannot be changed 
enum Status {
    SUCCESS = 1,
    ERROR = -1,
    PENDING = 0
};

// Using const for constants
const int CONSTANT_VALUE = 500;   //once assigned cannot be changed 

int main() {
    // Demonstrate #define constants
    printf("Using #define constants:\n");
    printf("MAX_VALUE: %d\n", MAX_VALUE);
    printf("MIN_VALUE: %d\n", MIN_VALUE);

    // Demonstrate enum constants
    printf("\nUsing enum constants:\n");
    printf("SUCCESS: %d\n", SUCCESS);
    printf("ERROR: %d\n", ERROR);
    printf("PENDING: %d\n", PENDING);

    // Demonstrate const constants
    printf("\nUsing const constants:\n");
    printf("CONSTANT_VALUE: %d\n", CONSTANT_VALUE);

    // Try modifying const value (This will give an error if uncommented)
    // CONSTANT_VALUE = 600;  // Uncommenting this line will give a compile-time error

    return 0;
}
