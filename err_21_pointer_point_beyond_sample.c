#include<stdio.h>

int main()
{
    int arr[] ={3,3,1};
    int *ptr = NULL;
    ptr=arr;
    printf(" %d   ",*ptr+8);  //garbage value
}