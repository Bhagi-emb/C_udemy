/*
Relational operators are used to compare two values. 
The result of the comparison is a boolean value, either true or false. 
The following table lists the relational operators available in C:
*/

#include <stdio.h>
int main()
{
    int a ,b;

    printf("Enter the value of a,b: \n");
    scanf("%d %d", &a, &b);

    if (a == b)
    {
        printf("a is equal to b\n");
    }
    else if (a > b)
    {
        printf("a is greater than b\n");
    }
    else if (a < b)
    {
        printf("a is less than b\n");
    }
    else {
        printf("not applicable\n");
    }
    
    if (a != b)
    {
        printf("a is not equal to b\n");
    }
    else if (a >= b)
    {
        printf("a is greater than or equal to b\n");
    }
    else if (a <= b)
    {
        printf("a is less than or equal to b\n");
    }
    else
    {
        printf("not applicable\n");
    }



}