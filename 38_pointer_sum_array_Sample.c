
/*
summing the array of elements by using function & pointers
*/

#include<stdio.h>
#include<stdlib.h>

//int arraySum(int array[],const int n);  //valid
int arraySum(int *array,const int n);    //vaild

    // int arraySum(int *array,const int n)
    // {
    //     int sum =0,*ptr = NULL;
    //     int *const arrayEnd = array+n; //this hold the last element address

    //     printf("\n last element : %p \n",array+n);
    //     for(ptr = array;ptr < arrayEnd;++ptr)  //compare with last element address
    //     {
    //         sum += *ptr;   //*ptr - dereference
    //         printf(" %d ",*ptr);
    //     }
    //     return sum;
    // }
    
/*simple fn from abve both valid*/
int arraySum(int *array,const int n)
{
    int sum = 0;
    int *const arrayEnd = array+n; //this hold the last element address

    printf("\n last element : %p \n",array+n);
    for( ;array < arrayEnd;++array)  //compare with last element address
    {
        sum += *array;   //*ptr - dereference
        printf(" %d ",*array);
    }
    return sum;
}
int main()
{
    int val[10] = {1,3,5,6,3,2,5,2,9,0};
    printf("\n sum of given array : %d \n",arraySum(val,10));
    return 0;
}