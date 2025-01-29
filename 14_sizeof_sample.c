/*
size of operator in C
The sizeof is a compile-time unary operator which can be used to compute the size of its operand. 
The result of the sizeof operator is of unsigned integral type which is usually denoted by size_t. 
The sizeof operator works in bytes, 
so the result of the sizeof operator is the number of bytes of the operand.
size some time based on the compiler and the machine architecture
*/


#include <stdio.h>
int main()
{
    int a = 5;
    float b = 2.5;
    char c = 'A';   
    double d = 5.5;
    long int e = 10;
    long long int f = 20;
    long double g = 30.5;

    void *ptr1,*ptr2; // void pointer (asterisk is used to declare a pointer)
    ptr1 = &a;
    ptr2 = &b;

    printf("Size of int = %lu bytes\n", sizeof(a));
    printf("Size of float = %lu bytes\n", sizeof(b));
    printf("Size of char = %lu bytes\n", sizeof(c));
    printf("Size of double = %lu bytes\n", sizeof(d));
    printf("Size of int pointer = %zd bytes\n", sizeof(*ptr1));
    printf("Size of float pointer = %lu bytes\n", sizeof(*ptr2));
    printf("Size of long int = %zd bytes\n", sizeof(e));
    printf("Size of long long int = %zd bytes\n", sizeof(f));
    printf("Size of long double = %zd bytes\n", sizeof(g));

    return 0;
}