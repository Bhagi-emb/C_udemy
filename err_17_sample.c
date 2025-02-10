#include<stdio.h>

#define a 9

int main()
{
    const int a = 4;

    printf("\n %d\n",a);

    return 0;

}

/*
o/p:
complie error: cannot assign to variable 'a' expanded from macro 'a'
 
*/