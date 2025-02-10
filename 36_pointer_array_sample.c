/*
example for pointer array
*/
#include<stdio.h>
int main()
{
    int arr[]={2,3,4,5,6,7,8};
    int *ptr = NULL;
    //ptr=&arr[0]; 
    //or
    ptr=arr;
    printf("\n");    
    int size = (sizeof(arr)/sizeof(arr[0]));
    for(int i=0; i < size; i++)
    {
        printf(" %d ",*ptr+i);  //*(ptr+i)
    }
    return 0;
}