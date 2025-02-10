/*******************
Memory Leaks: 

def: Memory that is allocated but never freed.
effect: Causes the program to run out of memory over time.
fix: Always call free() when done with dynamically allocated memory.

Always ensure that you call free() for every malloc(), calloc(), or realloc(). 
Tools like Valgrind can help detect memory leaks.

Dangling Pointers: 
def : A pointer that points to memory that has been freed.
effect: Leads to undefined behavior, crashes, or corrupted data.
fix: After free(), set pointers to NULL to avoid using them.

After freeing memory, always set the pointer to NULL. 
This makes it easy to check if a pointer is valid before accessing it
  
 *********************/

#include<stdio.h>

void memory_leak_example() {
    int *ptr = (int *)malloc(sizeof(int) * 10); // Allocate memory for 10 integers
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    // Do something with the memory (e.g., assigning values, etc.)
    
    // No free(ptr); here, so the memory allocated is never released, causing a leak.
    /*fixing*/
    //free(ptr);
}

void dangling_pointer_example() {
    int *ptr = (int *)malloc(sizeof(int) * 10); // Allocate memory for 10 integers
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    free(ptr);  // Memory is freed

    // Now, ptr is a dangling pointer because the memory has been freed, but ptr still points to the old memory
    printf("Trying to access freed memory: %d\n", ptr[0]); // Undefined behavior

    /*fixing*/

    // free(ptr);  // Memory is freed
    // ptr = NULL; // Set the pointer to NULL to avoid a dangling pointer

    // // Now, trying to access ptr will not cause undefined behavior
    // if (ptr != NULL) {
    //     printf("Trying to access freed memory: %d\n", ptr[0]); // This will not happen
    // } else {
    //     printf("Pointer is NULL, memory has been freed.\n");
    // }
}

int main() {
    memory_leak_example();
    dangling_pointer_example();
    return 0;
}