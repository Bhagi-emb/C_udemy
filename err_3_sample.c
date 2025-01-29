#include<stdio.h>
int main()
{
    int x=1,y=0,z=5;

    //int a = x&&y||z++; // (1 && 0 -> 0(FLASE)) || (5++) -> a=6;  //flase or true = true

    int a =x && y && z++; // (1 && 0 -> 0(FLASE)) && (5++) -> a=0; //flase and anything = false
    /* 
    x && y evaluates to flase and since there is z++ never gets executed 
    this is referred as short-circut evaluation 
    where the second boolean evaluation never gets evaluated 
    bcoz it does not need to becoz first is flase
    */

    printf("%d \n",z); //printing z value
    //o/p 1 : 6
    //o/p 2: 5
    return 0;
}