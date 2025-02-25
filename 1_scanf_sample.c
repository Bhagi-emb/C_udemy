/*
 * Author: BHAGYASREE G
 * Date: FEB-2025
 * Version: 1.0
 *
 * Description: sample c program
 * Repository: https://github.com/Bhagi-emb/C_udemy_sample.git
 *
 * Usage:
 *   Compile: gcc -o main filename.c
 *   Run: ./filename 
 */
#include<stdio.h>

int main()
{
    int a;
    char str[100];
    printf("Enter a number: ");
    scanf("%s %d",str,&a);
    printf("You entered: %s %d \n",str,a);
    return 0;
}