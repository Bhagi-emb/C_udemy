/*
logical operator sample 
*/
#include <stdio.h>
int main()
{
    int a = 5, b = 20;   //both are non zero : true

    if (a && b) //true && true : true
    {
        printf("Line 1 - Condition is true\n");
    }
    if (a || b) //true || true : true
    {
        printf("Line 2 - Condition is true\n");
    }
    
    /* lets change the value of a and b */
    a = 0;    //zero : false
    b = 10;   //non-zero : true
    
    if (a && b) //false && true : false
    {
        printf("Line 3 - Condition is true\n");
    }
    else
    {
        printf("Line 3 - Condition is not true\n");
    }
    if (!(a && b)) //!(false && true) : !(false) : true
    {
        printf("Line 4 - Condition is true\n");
    }
    return 0;
}