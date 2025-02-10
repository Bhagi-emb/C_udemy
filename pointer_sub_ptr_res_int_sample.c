/*
In C, 
subtracting one pointer from another gives you the difference between their memory addresses in terms of the number of elements of the type the pointer is pointing to. 
This can be useful when you're working with arrays or dynamic memory.

When you subtract two pointers, the result is of type ptrdiff_t, which is a signed integer type that represents the difference between two addresses.

Here's a simple example that shows how to subtract two pointers and get the difference in terms of the number of elements they point to:
*/

#include <stdio.h>
#include<stddef.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // An array of integers
    int *ptr1 = &arr[1];  // Pointer to the second element (20)
    int *ptr2 = &arr[4];  // Pointer to the fifth element (50)
    
    // Subtract the pointers and print the result
    ptrdiff_t diff = ptr2 - ptr1;   //ptrdiff_t is  signed integer type defined in stddef.h
    printf("Difference between pointers: %ld\n", diff);  // Output: 3
    
    return 0;
}


/*
Important Notes:
The difference ptr2 - ptr1 is calculated in terms of the number of elements, not bytes. 
This means the result is the number of elements of the type that the pointers are pointing to.

The result is stored as a ptrdiff_t, which is a signed integer type defined in stddef.h.

Pointer arithmetic works only if both pointers point to elements of the same array or 
allocated memory block. Subtracting pointers from different arrays or memory blocks is undefined behavior.
*/