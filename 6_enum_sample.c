/*
 * Author: BHAGYASREE G
 * Date: FEB-2025
 * Version: 1.0
 *
 * Description: sample enum program
 * Repository: https://github.com/Bhagi-emb/C_udemy_sample.git
 *
 * Usage:
 *   Compile: gcc -o main filename.c
 *   Run: ./filename 
 */
#include<stdio.h>
int main(void) 
{
    enum Company { GOOGLE=7, FACEBOOK, XEROX=1, YAHOO, EBAY, MICROSOFT };
    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;
    
    printf("The value of xerox is: %d\n", xerox); //print position of xerox in the enum
    printf("The value of google is: %d\n", google);
    printf("The value of ebay is: %d\n", ebay);
    
    return 0;
}