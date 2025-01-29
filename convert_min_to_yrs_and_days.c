/*
converting minutes to years and days
user enter the minutes and the program will convert it to years and months and days
*/

#include <stdio.h>
int main()
{
    int minutes;
    double years, days, months;

    printf("Enter the minutes: \n");
    scanf("%d", &minutes);

    // 1 year = 525600 minutes ->60 * 24 * 365
    //1 months = 43200 minutes  -> 60 * 24 * 30
    // 1 day = 1440 minutes -> 60 * 24

    //years = (minutes / 525600);
    years = (minutes / (60*24*365));

    //months = (minutes % 525600) / 43800;
    months = (minutes / (60*24*30)) / 12;

    //days = (minutes % 525600) / 1440; //as per year with months involved
    days = (minutes / (60*24))/(30 * 12);
    // days = ((minutes % 525600) % 43200 )/1440;

    printf("%d minutes is equal to %.2f years and %.2f months and %.2f days\n", minutes, years, months,days);

//output: check with 570840 minutes : 1 year 1 month 1 days
    return 0;
}