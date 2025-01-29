/*
sample wheather report
*/

#include<stdio.h>
#include<stdlib.h>

#define YEARS 5
#define MONTHS 12
int main()
{
    // initialize rainfall data for 2011-2015
    float rain_amt[YEARS][MONTHS] = { 
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    }; //12-months ,5- years

    float rain_avg =0;
    int i,j;

    //montly averge rain for 5 year
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    for(i=0;i<MONTHS;i++)
    {
        rain_avg=0.0; // Reset rain_avg for each month
        for(j=0;j<YEARS;j++)
        {
            //printf("%f",rain_amt[j][i]);
            rain_avg = rain_avg + rain_amt[j][i];          
        }
        printf("%4.1f ",rain_avg/YEARS);
    }
    printf("\n");

    //Yearly rainfall average
    float avg_yrs = 0;   //change datatype float to int -keep %f for print - answer for avg is 0 - type casting req
    for(i=0;i<YEARS;i++)
    {
        rain_avg=0;
        for(j=0;j<MONTHS;j++)
        {
             rain_avg +=  rain_amt[i][j];  
        }
        printf("%5d \t%15.1f\n", 2010 + i, rain_avg);
        avg_yrs += rain_avg;
    }
    printf("\nThe yearly average is %.1f inches.\n\n",avg_yrs/YEARS);

}
