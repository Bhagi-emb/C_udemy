#include<stdio.h>

int main()
{
    int num =0;
    int *ptr = NULL;
    ptr = &num;

    printf("\n enter the value \n");
    scanf(" %d",ptr);  //directly ptr cannot be read, it should have some variable address

    printf("check the ptr : %d num : %d add: %p \n",*ptr,num,ptr);

    return 0;
}