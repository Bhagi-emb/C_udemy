#include <stdio.h>

int main() {
    // Declare a 3D array (2 layers, 3 rows, 4 columns)
    int array[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    // Print the 3D array
    printf("3D Array:\n");
    for (int i = 0; i < 2; i++) {  // Iterate through layers
        printf("Layer %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {  // Iterate through rows
            for (int k = 0; k < 4; k++) {  // Iterate through columns
                printf("[%d][%d][%d] : %d  ", i,j,k,array[i][j][k]);  // Access each element
            }
            printf("\n");
        }
        printf("\n");  // Print a blank line after each layer
    }

    return 0;
}
