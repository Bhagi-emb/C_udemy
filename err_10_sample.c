#include<stdio.h>

void main()
{
    int a[2][3] = {1,2,3,4,5};

    int i=0,j=0;

    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            printf("%d",a[i][j]);
}
/*
o/p:
123450

a[0][0] = 1, a[0][1] = 2, a[0][2] = 3
a[1][0] = 4, a[1][1] = 5, a[1][2] = 0

*/