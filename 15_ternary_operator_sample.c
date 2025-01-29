/*
ternary operator is a decision-making operator that is used to decide 
which value to assign to a variable based on a condition.
*/

#include <stdio.h>
int main()
{
    int a = 10, b = 20, c;
    c = (a > b) ? a : b;
    // x=y>7?25:30; // if y>7 then x=25 else x=30
    printf("c = %d\n", c);
    return 0;
}