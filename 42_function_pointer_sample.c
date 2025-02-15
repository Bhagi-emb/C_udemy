/*
example of function pointer
*/

#include<stdio.h>

void printpt(void);

int main()
{
    int a= 10;
    int *ptr = NULL;
    ptr = &a;
    printf(" \n number is : %d",*ptr);

    void (*fptr)(void);
    fptr = printpt;
    fptr();  // calling a function by using a function pointer
    return 0;
}

void printpt()
{
    printf("\n print in function \n");
}