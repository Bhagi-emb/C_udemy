/*
bubble sort : this example show two type
1) numbers
2) strings
*/


#include<stdio.h>
#include<stdlib.h>

/* bubble sort for numbers */
// void swap(int *var1,int *var2)
// {
//     int temp;
//     temp = *var1;
//     *var1 = *var2;
//     *var2 =temp;
// }

void printarray(int arr[],int size)
{
    printf("\n");
    int i;
    for (i=0;i < size ;i++)
    {
        printf(" %d ",arr[i]);
    }
}

void bubble_sort_number (int arr[],int size)
{
    int swap = 0,temp;  //false

    printf(" \n Provide elements for bubble sort \n");
    printarray(arr,size);

    for(int var1=0; var1< size-1 ; var1++)
    {
        //swap =0;
        for(int var2=0; var2 < size-var1-1; var2++ )
        {
            if(arr[var2] > arr[var2+1])
            {
                //swap(arr[var2],arr[var2+1]);   
                //this swap will work if we use points void swap(int var1,int var2) - don't return/update value to called fn
                temp = arr[var2];
                arr[var2] = arr[var2+1];
                arr[var2+1] =temp;
                //swap=1;
            }
        }
        // If no elements were swapped in this pass, array is already sorted
        // if(swap == 0)
        //     break;
    }

    printf("\n after bubble sort \n");
    printarray(arr,size);
}

/* always pass parameter -  array along with size */

int main()
{
    int num[] = {24,15,13,93,48,22};
    //int res[]= {};  //empty string int

    int size = sizeof(num)/sizeof(num[0]);

    bubble_sort_number(num,size);

    return 0;
}