/*
const ptr combo
*/

#include <stdio.h>

int main() {
    // Example 1: Pointer to constant (const int *ptr)
    int a = 10;
    const int *ptr_to_const = &a;  // Pointer to a constant integer

    printf("Example 1: Pointer to constant\n");
    printf("Value of a: %d\n", *ptr_to_const);
    // *ptr_to_const = 20;  // Error: cannot modify value through pointer
    printf("\n");

    // Example 2: Constant pointer (int *const ptr)
    int b = 20;
    int *const const_ptr = &b;  // Constant pointer, can change value but not address
    
    printf("Example 2: Constant pointer\n");
    printf("Value of b: %d\n", *const_ptr);
    *const_ptr = 30;  // Can modify value
    printf("After modifying value, b: %d\n", *const_ptr);
    // const_ptr = &a;  // Error: cannot change the address of a constant pointer
    printf("\n");

    // Example 3: Constant pointer to a constant (const int *const ptr)
    int c = 40;
    const int *const const_ptr_to_const = &c;  // Constant pointer to a constant integer
    printf("Example 3: Constant pointer to constant\n");
    printf("Value of c: %d\n", *const_ptr_to_const);
    // *const_ptr_to_const = 50;  // Error: cannot modify value through pointer
    // const_ptr_to_const = &b;  // Error: cannot change address of constant pointer
    printf("\n");

    // Example 4: Constant value pointer (const int const *ptr)
    const int const *ptr_to_const_val = &c;  // Same as `const int *const ptr`
    printf("Example 4: Constant value pointer\n");
    printf("Value of c: %d\n", *ptr_to_const_val);
    // *ptr_to_const_val = 60;  // Error: cannot modify value through pointer
    // ptr_to_const_val = &b;  // Error: cannot change address of constant pointer
    printf("\n");

    return 0;
}
