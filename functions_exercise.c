#include <stdio.h>
#include <stdlib.h>

//Function for GCD(greatest common divider) of two non-negtive integer
//if  a-24,b-36 : should return a highest value that divide both number : here 12
int GCD(int a,int b){ //Using euclidean algorithm
    int temp;    
    while(b!=0){
        temp = a%b;
        a = b;
        b =temp;
    }
    return a;
}

//function calculate -absolute value of number
float absolute(float num){
    if(num > 0)
        return num;
    else
        return -num;   
}

//function compute square root of number
int squareroot(int num){
    if(num < 0)
        return -1.0;
    else {
        int x=1,sqr =0;
     for(; num > sqr ; x++)
        {
            sqr = x*x;
            if(sqr == num)
                return x;
        }  
        //return (x-1); 
    }     
}


int main()
{
    printf(" hello \n ");
    printf("results of GCD : %d \n ",GCD(150,35));
    printf("results of GCD : %d \n ",GCD(1026,405));
    printf("results of GCD : %d \n\n ",GCD(83,240));

    printf("results of absolute : %.2f \n",absolute(-15.5));
    printf("results of absolute : %.2f \n",absolute(20.0)+absolute(-5.0));
    printf("results of absolute : %.2f \n",(float)absolute((int)-716));
    printf("results of absolute : %.2f \n",(float)absolute(-716));
    printf("results of absolute : %.2f \n\n",absolute(6.0)/4);
    
    printf("results of squareroot : %d \n",squareroot(-3));
    printf("results of squareroot : %d \n",squareroot(225));

    return 0;
}