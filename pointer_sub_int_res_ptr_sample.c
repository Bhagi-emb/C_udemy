/********************************
* C, you can subtract an integer from a pointer to move the pointer backwards by a 
* specific number of elements. The result is a new pointer that points to an earlier position 
* in memory based on the type the pointer is pointing to.
*********************************/

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // An array of integers
    int *ptr = &arr[4];  // Pointer to the fifth element (50)

    // Subtract 2 from the pointer to move it 2 elements back
    int *new_ptr = ptr - 2;  // Now points to arr[2], which is 30

    printf("Original pointer points to: %d\n", *ptr);  // Output: 50
    printf("New pointer points to: %d\n", *new_ptr);   // Output: 30
    
    return 0;
}


/**********************************
Important Notes:

The pointer arithmetic operates in terms of the size of the type the pointer is pointing to. 
So when you subtract 1 from a pointer to an int, 
the pointer will move by sizeof(int) bytes (usually 4 bytes).

The subtraction of an integer from a pointer is valid only if 
the pointer is within an array or a memory block that has been properly allocated. 
Otherwise, it leads to undefined behavior.
********************************************/