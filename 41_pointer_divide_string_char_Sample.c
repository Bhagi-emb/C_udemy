/*
i/p: "string"
o/p: "s","t""r""i""n""g" - store in char

same with int 123 - 1,2,3
*/

#include<stdio.h>
int main()
{
    int num[5]={123};
    int res[5];

    // Convert the number 123 into individual digits and store them in the array
        for (int i = 0; i < 3; i++) {
            res[i]=num[0]%10;   //123%10 - 23 :: 23%10 -3
            num[0]=num[0]/10;   //123/10 - 1 :: 23/10 - 
        }
        // Print the values in the array
        for (int i = 0; i < 3; i++) {
            printf("res[%d] = %d\n", i, res[i]);
        }
    // Array of strings (each string is an array of characters)
        char str[] ={"string"};
        for (int i = 0; str[i] != '\0'; i++) {
            // Print each character in the desired format
            printf("\"%c\"", str[i]);
        }    


    // Array of strings (each string is an array of characters)
    char *str[] = {"string", "hello"};
    
    // Iterate over each string in the array of strings
    for (int j = 0; j < 2; j++) {
        // Iterate over each character of the current string
        for (int i = 0; str[j][i] != '\0'; i++) {     //2D char array
            // Print each character in the desired format
            printf("\"%c\"", str[j][i]);

            // Print a comma after each character except the last one
            // if (str[j][i+1] != '\0' || (j < 1 && str[j+1][0] != '\0')) {
            //     printf(",");
            // }
        }
    }

    printf("\n");  // Print a newline at the end

    return 0;
}

//in- complete program ,check again 