/* Function Pointer with Parameters */
#include <stdio.h>

// Function with parameters
int add(int a, int b) {
    return a + b;
}

int main() {
    // Function pointer declaration
    int (*funcPtr)(int, int);

    // Assign function address
    funcPtr = add;

    // Call function using pointer
    printf("Sum: %d\n", funcPtr(5, 3));

    return 0;
}
