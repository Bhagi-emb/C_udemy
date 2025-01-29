/*
nest loop sample
*/

#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int i, j;

    /*pyrmid left to right */
    // for (i = 1; i <= 5; ++i)
    // {
    //     for (j=1 ;j <= i;j++)
    //     {
    //         printf("%d ", j);
    //     }
    //     printf("\n");
    // }

     /*pyrmid right to left */
    // for (i = 1; i <= 5; ++i)
    // {
    //     for (j=1 ;j <= (6-i);j++)
    //     {
    //         printf("%d ", j);
    //     }
    //     printf("\n");
    // }

    /*pyrmid center */
    for (i = 1; i <= 6; ++i)
    {
        for (j=1; (j <= 8-i);j++)
        {
            if(j < i)
                printf(" ");
            else
                printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
