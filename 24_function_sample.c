/*
sample function example
*/

#include <stdio.h>

void mux(int x, int y);

int main()
{
    mux(10,20);
    mux(40,6);
    return 0;
}

void mux (int x,int y)
{
    printf("multipy %d*%d :%d\n",x,y,x*y);
}