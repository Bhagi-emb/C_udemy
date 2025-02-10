#include<stdio.h>

int main()
{
    //char str[]={'j','a','s','\0'};

    char str[25];
    scanf("%s",str);  
    //If the user enters a string like Hello World, 
    //scanf will stop reading when it reaches the space and only store Hello. 
    //The rest of the input (World) will be ignored.

    printf("\n %s \n",str);
    return 0;
}
