#include<stdio.h>

void main()
{
    double a[][] = {
        {1.2,9.0,3.2},
        {9.2,0.5,1.5,-1.2},
        {7.3,7.9,4.8}
        };  
    
    printf("%f",a[2][1]);
}
/*
o/p:
error: array has incomplete element type 'double[]'
complie error
*/