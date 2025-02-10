/*
"Pass by value" 
is a method of passing arguments to a function 
where the actual value of the argument is passed, 
rather than a reference to the original variable. 
In this case, changes made to the parameter inside the function do not affect 
the original argument in the calling function, because the function works with a copy of the value.
*/

#include<stdio.h>
#include<stdlib.h>

void swap (int p, int q)
{
    int temp;
    temp = p;
    p = q;
    q = temp;
    printf(" \n IN swap : num1 - %d, num2 - %d \n",p,q);
}

int main()
{
    int a = 10,b=5;

    printf(" \n before swap : num1 - %d, num2 - %d \n",a,b);
    swap(a,b);
    printf(" \n after swap : num1 - %d, num2 - %d \n",a,b);

    return 0;
}
