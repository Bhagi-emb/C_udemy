
/* Basic Function Pointer */
#include <stdio.h>

// Function to be pointed to
void displayMessage() {
    printf("Hello, Function Pointer!\n");
}

int main() {
    // Declaring a function pointer
    void (*funcPtr)();

    // Assigning function address to pointer
    funcPtr = displayMessage;

    // Calling function using pointer
    funcPtr();

    return 0;
}
