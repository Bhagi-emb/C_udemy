/*
simple C program demonstrating malloc, calloc, and realloc
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, *new_arr;
    int n = 5, i;

    // Using malloc
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Memory allocated using malloc:\n");
    for (i = 0; i < n; i++) {
        arr[i] = i + 1; // Assign values
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Using calloc
    int *arr2 = (int *)calloc(n, sizeof(int));
    if (arr2 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Memory allocated using calloc (initialized to 0):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]); // calloc initializes memory to 0
    }
    printf("\n");

    // Using realloc to resize malloc memory
    new_arr = (int *)realloc(arr, 10 * sizeof(int));
    if (new_arr == NULL) {
        printf("Memory reallocation failed\n");
        free(arr);
        return 1;
    }
    arr = new_arr;
    printf("Memory reallocated using realloc:\n");
    for (i = 0; i < 10; i++) {
        if (i >= n) arr[i] = (i + 1) * 2; // Assign new values for extended memory
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);
    free(arr2);

    return 0;
}

/*Details:
malloc (Memory Allocation):
+------+------+------+------+------+
| ??   | ??   | ??   | ??   | ??   |
+------+------+------+------+------+
(?? represents uninitialized garbage values)
calloc (Cleared Allocation):
+----+----+----+----+----+
|  0 |  0 |  0 |  0 |  0 |
+----+----+----+----+----+
Key Differences:
Feature             	malloc	                         calloc
Initialization	   Uninitialized (Garbage values)	Initializes memory to 0
Speed	               Faster	                    Slightly slower (due to initialization)
Syntax	              malloc(size)	                   calloc(num, size)
Use Case	    When initialization isn't required	When you need zero-initialized memory
*/