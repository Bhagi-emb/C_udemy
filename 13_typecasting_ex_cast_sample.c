/*
Type casting : explicit conversion using cast operators 
*/

#include <stdio.h>
int main()
{
    int a = 5;
    int b = 2;
    float c = (float)a / b; // type casting
    printf("int to float = %.3f\n", c);

    float d = 5.5;
    int e = (int)d; // type casting
    printf("float to int = %d\n", e);

    return 0;
}