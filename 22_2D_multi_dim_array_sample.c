#include <stdio.h>

int main() {
    // Declare a 2D array (3 rows and 4 columns)
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    /*
    [0][0]:1  [0][1]:2  [0][2]:3  [0][3]:4  
    [1][0]:5  [1][1]:6  [1][2]:7  [1][3]:8  
    [2][0]:9  [2][1]:10  [2][2]:11  [2][3]:12    
    */
   
    // Print the 2D array
    printf("Matrix:\n");
    for (int i = 0; i < 3; i++) {  //row
        for (int j = 0; j < 4; j++) {  //column
            printf("[%d][%d]:%d  ",i,j, matrix[i][j]);  // Access each element
        }
        printf("\n");  // New line after each row
    }

    return 0;
}

/*
2D Arrays: Use two loops to access elements in rows and columns.
3D Arrays: Extend the concept to 3 dimensions (layers, rows, and columns).
Jagged Arrays: Arrays of arrays where inner arrays can have different sizes.
Dynamic Multi-dimensional Arrays: Arrays whose sizes are determined at runtime, 
                                    typically using pointers.

*/