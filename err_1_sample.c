#include <stdio.h>
void main ()
{
    int k=4;
    float k =4;
    printf("%d",k);
    //assigning the variable to two different data type cause complier error
    //error: redefinition of 'k' with a different type: 'float' vs 'int'
}