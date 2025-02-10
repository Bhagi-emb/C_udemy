/*
Const example with different data type
*/
#include <stdio.h>

// Integer Constants
#define MAX_VALUE 100
#define MIN_VALUE 0

// Floating-point Constants
const float PI = 3.14159;
const double E = 2.71828;

// Character Constants
const char newline = '\n';
const char letter = 'A';

// String Constants
const char* message = "Hello, World!";

// Enum Constants
enum Status {
    SUCCESS = 1,
    ERROR = -1,
    PENDING = 0
};

// Constant Pointer Example
int x =10;
const int* const ptr = &x;  // Pointer to a constant integer

int main() {
    // Integer Constants
    printf("Integer Constants:\n");
    printf("MAX_VALUE: %d\n", MAX_VALUE);
    printf("MIN_VALUE: %d\n", MIN_VALUE);

    // Floating-point Constants
    printf("\nFloating-point Constants:\n");
    printf("PI: %.5f\n", PI);
    printf("E: %.5f\n", E);

    // Character Constants
    printf("\nCharacter Constants:\n");
    printf("newline: %c", newline);  // Prints a new line
    printf("letter: %c\n", letter);

    // String Constants
    printf("\nString Constants:\n");
    printf("Message: %s\n", message);

    // Enum Constants
    printf("\nEnum Constants:\n");
    printf("SUCCESS: %d\n", SUCCESS);
    printf("ERROR: %d\n", ERROR);
    printf("PENDING: %d\n", PENDING);

    // Constant Pointer
    printf("\nConstant Pointer Constants:\n");
    printf("ptr points to: %d\n", *ptr);  // Prints the value pointed to by ptr

    // Attempt to modify the value pointed to by ptr (this will cause a compile-time error)
    // *ptr = 20;  // Uncommenting this line will give an error because the value is constant
    
    // Attempt to make the pointer point to another memory location (this will also cause a compile-time error)
    //  int y = 30;
    //  ptr = &y;  // Uncommenting this line will give an error because the pointer itself is constant
    
    // Correct usage: only reading the value the pointer is pointing to
    // printf("Value at ptr (after trying to change): %d\n", *ptr);

    return 0;
}
