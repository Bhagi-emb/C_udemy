/* By using array - square root */

#include<stdio.h>
int main(void)
{
    int arr[10];

    for(int i=0; i<10 ;i++){
        arr[i] =i*i;
        printf("a[%d] : %d\n",i,arr[i]);
    }
    return 0;
}