#include<stdio.h>
// struct data {
//     int month,date,year;
// }; // not valid 

struct data {
    int date;
    int month;
    int year;
};
int main()
{
    // struct data d;
    // d.date =12;
    // d.month =12;
    // d.year =2025;
    struct data d ={12,12,2025};
    printf("\n data:%d month: %d year %d(%d) \n",d.date,d.month,d.year%100,d.year);
    return 0;
}