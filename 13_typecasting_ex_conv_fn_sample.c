/*
Type casting -> explicit conversion using conversion functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //atoi() - converts a string to an integer : syntax: int atoi(const char *str)
    //atof() - converts a string to a floating-point number :syntax: double atof(const char *str)
    //itoa() - converts an integer to a string : syntax: char *itoa(int num, char *str, int base)

    char str[] = "123";
    int num = atoi(str);
    printf("String to int = %d\n", num);

    char str2[] = "123.45";
    float num2 = atof(str2);
    printf("String to float = %f\n", num2);

    // int num3 = 123;
    // char str3[20];
    // itoa(num3, str3, 10);
    // printf("Int %d to string = %s\n", num3, str3);

    return 0;
}