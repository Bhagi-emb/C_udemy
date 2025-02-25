/* Function Pointer Returning a Function Pointer*/
#include <stdio.h>

// Function that returns a function pointer
void hello() {
    printf("Hello from returned function!\n");
}

void (*getFunction())() {
    return hello;
}

int main() {
    void (*funcPtr)();
    funcPtr = getFunction();  // Getting function pointer
    funcPtr();  // Calling the function

    return 0;
}
