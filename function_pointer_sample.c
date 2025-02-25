#include <stdio.h>

// Arithmetic functions
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { 
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b; 
}

int main() {
    int choice, a, b;
    
    // Array of function pointers
    int (*operations[])(int, int) = {add, subtract, multiply, divide};

    // Menu
    printf("Select operation:\n");
    printf("0. Add\n1. Subtract\n2. Multiply\n3. Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice < 0 || choice > 3) {
        printf("Invalid choice!\n");
        return 1;
    }

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Call the selected function
    int result = operations[choice](a, b);
    
    // Display result
    printf("Result: %d\n", result);

    return 0;
}
