/*
calculate the weekly pay of an employee
input: number of hours worked in a week
output: gross pay, taxes, net pay
*/

#include <stdio.h>

#define TAX_300 (300 * 0.15)
#define TAX_150 (150 * 0.20)
#define TAX_450 0.25
#define BASIC_PAY 480

int main()
{
    /*
    assumpations : basic pay rate = 12.00/hr
    Overtime (in excess of 40 hours) = time and a half // 18$ per hour extra
    tax rate:
    15% of the first $300
    20% of the next $150
    25% of the rest
    */
   float payhrs = 0;
   double netpay,tax,grosspay,pay;

    printf(" enter the num of hours worked \n");
    scanf("%f",&payhrs);    
    //grosspay
    if(payhrs > 40)
    {
        grosspay = ((payhrs - 40) *18)+ BASIC_PAY;
    } else if(payhrs < 40) {
        grosspay = payhrs * 12;
    } else {
        grosspay = BASIC_PAY;
    }
    pay = grosspay;

    //tax
    if(grosspay > 300) {
       tax = TAX_300 ;
       grosspay = grosspay - 300;
       if(grosspay > 150) {
            tax = tax + TAX_150;
            grosspay =grosspay -150;
            if(grosspay > 1) {
                tax = tax + (grosspay * TAX_450);
            }
        }
    } else {
        tax = 0;
    }
    //netpay
    netpay=  pay - tax;
    printf(" grosspay %.2f \t tax %.2f \t netpay : %.2f \n",pay,tax,netpay);
    return 0;

}