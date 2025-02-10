#include<stdio.h>


int main()
{
    const int a;
    a=4;
    printf("\n %d\n",a);

    return 0;

}

/*
o/p:
complie error: cannot assign to variable 'a' with const-qualified type 'const int'
    a=4;
*/