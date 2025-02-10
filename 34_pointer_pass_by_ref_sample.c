/*
"pass by reference": 
refers to passing a reference to an argument in a function, 
rather than passing the value of the argument itself. 
This means that any changes made to the parameter inside 
the function will affect the original argument in the calling function.
*/

#include<stdio.h>
#include<stdlib.h>

void swap (int *p, int *q)
{
    int *temp;
    *temp = *p;
    *p = *q;
    *q = *temp;
}

int main()
{
    int a = 10,b=5;
    int *p,*q;
    p=&a;
    q=&b;
    printf(" \n before swap : num1 - %d, num2 - %d \n",*p,*q);
    swap(p,q);
    printf(" \n after swap : num1 - %d, num2 - %d \n",*p,*q);

    return 0;
}
