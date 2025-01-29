#include<stdio.h>
int main()
{
    int b =3;
    float a = 3.0;
    long int c = 3;
    double d = 334.000;

    printf(" check the o/p data type %f \n ",((float)a * (int)b)/(long)c * (double)d);
    // float * int = float;
    //long * double = double;
    //float / double = double;
    return 0;
}