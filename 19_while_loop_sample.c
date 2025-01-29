/*
while loop
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long sum = 0LL; // store the sum of the integers
    unsigned int count = 0; // the number of integers to be summed

    // read the number of integers to be summed
    printf("Enter the number of integers you want to sum: ");
    scanf("%u", &count);

    // sum integers from 1 to count
    unsigned int i = 2;
    while (i <= count)
    {
        sum += i;
        ++i;
    }

    // display the result
    printf("while : Total of the first %u numbers is %llu\n", count, sum);

    return 0;
}