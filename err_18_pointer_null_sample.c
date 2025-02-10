#include<stdio.h>

int main()
{
    int *ptr = 5;  //uninitilized pointer
    //*ptr = 5;   //terrible error

    printf("\n ptr :%p \n",ptr);
    printf("\n ptr :%d \n",*ptr);
    return 0;
}

/* directly we can't assign number to pointer it cause segmentation fault
*/