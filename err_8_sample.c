#include<stdio.h>
int main()
{
    int a =0 ,i=0;
    for (i=0;i<5;i++)
    {
        a++;
        if(i==3)
            break;
    }
    printf("%d \n",a);
    return 0;
}
/*o/p:
4
*/