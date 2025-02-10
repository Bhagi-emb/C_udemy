/*
bubble sort : this example show two type
1) numbers
2) strings
****************
string compare:
****************
If the two strings are identical, strcmp returns 0.
If the first string is lexicographically less than the second, it returns a negative integer.
If the first string is lexicographically greater than the second, it returns a positive integer.
    - lexicographically less means that the first differing character in str1 has lower value(based on ASCII) than str2
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void printarray(char *str[],int size)
{
    printf("\n");
    int i;
    for (i=0;i < size ;i++)
    {
        printf(" %s \n",str[i]);
    }
}

void bubble_sort(char *str[],int size)
{

    for(int var =0; var < size-1; var++)
    {
        for(int var1=0; var1< size-var-1 ; var1++)
        {
            if(strcmp(str[var1],str[var1+1]) > 0)
            {
                // Swap the pointers, not the strings
                char *temp;
                temp = str[var1];
                str[var1] = str[var1 + 1];
                str[var1 + 1] = temp;
                 
                /*Below lines won't work: mostly it have to same type passing to strcpy array/pointer
                 check below explaination */ 
                // char temp[20]; 
                // strncpy(temp,str[var1],sizeof(temp)-1);
                // strncpy(str[var1],str[var1 + 1],sizeof(str[var1])-1);
                // strncpy(str[var1 + 1] , temp,sizeof(str[var1 + 1]-1));
            }
        }
    }
}


/************************************************************************
Issues:

Swapping Pointers with strncpy:
strncpy is meant to copy a specific number of characters from one string to another, 
but using it here with fixed-size arrays like temp[20] is problematic. 
You’re not actually swapping the pointers, but instead copying strings, 
which defeats the purpose of pointer swapping in bubble sort.
Additionally, the use of strncpy(str[var1], str[var1 + 1], sizeof(str[var1])-1) is incorrect. 
sizeof(str[var1]) will give the size of a pointer (typically 8 bytes in 64-bit systems), 
not the actual length of the string. 
You should never use sizeof on pointers when dealing with string lengths.

Array Overflow Risk:
The temp array is defined as char temp[20], 
but if any string is longer than 19 characters (to leave room for the null terminator), 
it will result in truncation. This can lead to unexpected behavior or even bugs.
**************************************************************************/
/* always pass parameter -  array along with size */

int main()
{
    char *string[] = {"banana", "apple", "cherry", "date", "elderberry"};

    int size = sizeof(string)/sizeof(string[0]);
    bubble_sort(string,size);
    printarray(string,size);
    return 0;
}