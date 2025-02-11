#include<stdio.h>
void main()
{
    int const *p =5;
    printf("%d",++(*p)); 
}

/* o/p:
complier error - as we cant change the pointer point the value as it is const*/
