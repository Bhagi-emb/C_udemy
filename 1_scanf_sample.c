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