#include<stdio.h>

int main()
{
    long num1= 0L;
    long num2= 0L;
    long *pnum = NULL;

    /*FIRST VARIABLE*/
    pnum = &num1;       //*pnum =0
    *pnum = 2L;         //*pnum=2 , num1 =2
    ++num2;             //num2=1
    num2+= *pnum;       //num2=1+2 =3

    /*SECOND VARIABLE*/
    pnum = &num2;       //*pnum=3
    ++*pnum;            //*pnum=4, num2=4;  *pnum+num2= 4 + 4 = 8

    printf("\n num1= %ld \t num2=%ld \n *pnum = %ld \n *pnum+num2 = %ld \n",num1,num2,*pnum,*pnum+num2);



    return 0;
}