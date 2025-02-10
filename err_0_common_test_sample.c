#include <stdio.h>

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    int *ptr = NULL;
    
    //ptr = &arr[0];  // This is equivalent to the line below.
    ptr = arr;  // ptr now points to the first element of the array
    
    printf("\n");    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < size; i++) {
        printf(" %d ", *(ptr + i));  // Correct pointer arithmetic
    }
    
    return 0;
}
//why % at end?