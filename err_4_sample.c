#include<stdio.h>
int main()
{
    short int i =20;
    char c = 97;
    printf("%lu %lu %lu \n",sizeof(i),sizeof(c),sizeof(c+i));

    /*
    sizeof(c + i): When performing the arithmetic operation between a char and a short int, 
    the char is promoted to int, so the result is an int, which is typically 4 bytes.
    */
    return 0;
}