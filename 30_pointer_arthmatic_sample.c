#include<stdio.h>

int main()
{
    int a = 10;
    int b= 5;
    int *ptr1 = NULL,*ptr2 = NULL;  /*ASSIGNING TO NULL is best practice */
    ptr1=&a;
    ptr2=&b;

    printf("\n add - pointer : %d \n ",*ptr1 + *ptr2);
    printf("\n sub - pointer : %d \n ",*ptr1 - *ptr2);
    printf("\n mux - pointer : %d \n ",*ptr1 * *ptr2);
    printf("\n div - pointer : %d \n ",*ptr1 / *ptr2);
    printf("\n mod - pointer : %d \n ",*ptr1 % *ptr2);
    printf("\n inc - pointer : %d \n ",++*ptr1);
    printf("\n dec - pointer : %d \n ",--*ptr2);

    return 0;
}