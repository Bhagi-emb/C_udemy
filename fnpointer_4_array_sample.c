/* Function Pointer Array (Jump Table) */
#include <stdio.h>

// Functions
void func1() { printf("Function 1\n"); }
void func2() { printf("Function 2\n"); }
void func3() { printf("Function 3\n"); }

int main() {
    // Array of function pointers
    void (*funcArr[])() = {func1, func2, func3};

    // Calling functions using array index
    funcArr[0]();  // Calls func1
    funcArr[1]();  // Calls func2
    funcArr[2]();  // Calls func3

    return 0;
}
