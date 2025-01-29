#include <stdio.h>
#include<stdlib.h>

int main()
{
    int range1,range2;

    printf("enter the prime number range \n");
    scanf("%d%d",&range1,&range2); // garbage : scanf("%d,%d" <- providing comma

    //check the valid range
    if((range1 <= 1) || (range2 <=1)){
        printf("you entered invalid range:enternce \n"); 
        return 1;  
    } 

    // Make sure range1 is smaller than range2  
    if(range1 != range2) {       //checking range are not same number
        if(range1 > range2) {       
            int temp;
            temp = range1;
            range1 = range2;
            range2 = temp;
        } 
    }
    

    // Print the primes in the range
    printf("Prime numbers between %d and %d are:\n", range1, range2);
    
    for( int i=range1; i<=range2 ;i++) 
    {
        int isprime = 1; //assume current range1/i is prime
        for(int j=2; (j*j <= i);j++)  //j*j -> squareroot j
        {
            if(i % j == 0)  
            {
                isprime = 0; //not a prime number
                break;
            }
        }
        if(isprime) {    //isprime = 1 :if true
            printf("%d ",i);
        }
            
    }
    printf("\n");

    return 0;
}


/*
explanation:

Outer loop 
(for(int i = range1; i <= range2; i++))
: This loop iterates over each number i in the range from range1 to range2.

The variable i represents the current number being checked for primality.
Inner loop 
(for(int j = 2; (j * j <= i); j++))
: This loop checks if i is divisible by any number from 2 to sqrt(i).

The reason for looping up to j * j <= i is an optimization. 
Any divisor larger than sqrt(i) would have already been checked as part of a smaller divisor. 
For example, 
for i = 36, the divisor 6 will be checked when j = 6, 
and we don't need to check anything larger.
Prime check (if(i % j == 0)): This checks whether i is divisible by j. 
If i % j == 0, it means i is not prime, so the variable isprime is set to 0, 
and we break out of the inner loop because there's no need to check further divisors.

Prime number detection (if(isprime))
: After checking all possible divisors of i, 
if no divisors are found (isprime remains 1), the program prints i as a prime number.
*/