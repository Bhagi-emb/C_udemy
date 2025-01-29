/* array sample for all data type */

  #include <stdio.h>
 int main()
 {
    // int num[]={0,1,2,3,-3,45,546,64};   
    //  //if we write num[10]={0,1,2,3,-3,45,546,64} -> always size of array is 10 -> remaining 9,10 is 0
    //float num[]={0.2,1.4,2,3.8,-3,45,546.99,64}; 
    //char num[]={'a','c','f','s','a','f','t','v'};
    char num[]={[3]= 'a',[2]='c',[1]='f',[0]='v'};  //designated initilizers

    int size = sizeof(num)/sizeof(num[0]);
    printf("print the size of array : %d \n ",size);

    for( int i=0; i < size; i++)
    {
        //printf("num[%d] = %d \n",i,num[i]);
        //printf("num[%d] = %f \n",i,num[i]);
        printf("num[%d] = %c \n",i,num[i]);
    }
    return 0;
 }



