/*
Bitwise operator sample program   
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //unsigned int a,b; // unsigned int is used to store only positive value
    signed int a,b; // signed int is used to store both positive and negative value

    printf("enter the two value for bitwise \n ");
    scanf("%d %d",&a,&b);

    //sample a= 1000(8), b=0011(3) 

    printf("a&b = %d\n",a&b); // 1000 & 0011 = 0000 -> 0
    printf("a|b = %d\n",a|b); //  1000 | 0011 = 1011 -> 11(b)
    printf("a^b = %d\n",a^b); // 1000 ^ 0011 = 1011 -> 11(b)
    printf("~a = %d\n",~a); // ~1000 -> -8 -1 = -9
    printf("a<<2 = %d\n",a<<2); // 1000 << 2 = 0010 0000 -> 32
    printf("a>>2 = %d\n",a>>2); // 1000 >> 2 = 0010 -> 2

    return 0;
}