/* guess the number*/
#include <stdio.h>
#include <stdlib.h> //for rand() & srand()
#include <time.h>

int main()
{
    int num;
    //seed the random number generator with current time 
    srand(time(0));

    int rand_num;

    //generate the random number with in range 1 to 20
    rand_num = rand() % 20 + 1;
    
    printf("generating the random number : %d \n",rand_num);

    printf("guess the number 0 to 20 \n ");
    scanf("%d",&num);

    for(int i=0; i<5 ;i++)
    {
       // do {
            if(num == rand_num)
            {
                printf(" wow ! amazing right \n");
               // i=6;
                break;
            }
            else if( num > rand_num)
            {
                printf(" opps ! , %d my number is less \n",num);
            }
            else {
                printf(" opps ! , %d my number is greater \n",num);
            }
            printf("try again ! guess count : %d \n",(5-i));
            scanf("%d",&num);
       // }while(num == rand_num);
    }
    return 0;
    
}