/*
 * Author: BHAGYASREE G
 * Date: FEB-2025
 * Version: 1.0
 *
 * Description: sample passing arguments to main program
 * at ruuning state : gcc -0 main filename.c arg1 arg2
 * Repository: https://github.com/Bhagi-emb/C_udemy_sample.git
 *
 * Usage:
 *   Compile: gcc -o main filename.c
 *   Run: ./filename 
 */
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    double width = atoi(argv[1]);
    double height = atoi(argv[2]);
    double perimeter = 2 * (width + height);
    double area = width * height;
    printf("Perimeter of the rectangle = %f units\n", perimeter);
    printf("Area of the rectangle = %f sq units\n", area);
    return 0;
}