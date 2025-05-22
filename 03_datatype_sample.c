/*
 * Author: BHAGYASREE G
 * Date: FEB-2025
 * Version: 1.0
 *
 * Description: sample datatype c program
 * Repository: https://github.com/Bhagi-emb/C_udemy_sample.git
 *
 * Usage:
 *   Compile: gcc -o main filename.c
 *   Run: ./filename 
 */
#include<stdio.h>
int main(void) 
{
    int int_var = 5;
    float float_var = 331.79;
    double double_var = 8.44e+11;
    char char_var = 'W';
    _Bool bool_var = 0;
    unsigned int uint_var = 1;
    signed int sint_var = -1;
    //UNSIGNED_LONG_LONG_INT ulli_var = 18446744073709551615;
    //SIGNED_LONG_LONG_INT slli_var = -9223372036854775808;
    long long int lli_var = 9223372036854775807;    
    long int li_var = 2147483647;
    short int si_var = 32767;
    long double ld_var = 3.14159265358979323846;

    /* provide the size of data type */
    printf("Storage size for int : %d \n", sizeof(int_var));
    printf("Storage size for float : %d \n", sizeof(float_var));
    printf("Storage size for double : %d \n", sizeof(double_var));
    printf("Storage size for char : %d \n", sizeof(char_var));
    printf("Storage size for bool : %d \n", sizeof(bool_var));
    printf("Storage size for unsigned int : %d \n", sizeof(uint_var));
    printf("Storage size for signed int : %d \n", sizeof(sint_var));
    //printf("Storage size for unsigned long long int : %d \n", sizeof(ulli_var));
    //printf("Storage size for signed long long int : %d \n", sizeof(slli_var));
    printf("Storage size for long long int : %d \n", sizeof(lli_var));
    printf("Storage size for long int : %d \n", sizeof(li_var));
    printf("Storage size for short int : %d \n", sizeof(si_var));
    printf("Storage size for long double : %d \n", sizeof(ld_var));

            
    /* print the value of the variables defined :format specifer */ 
    // printf("int_var = %d\n", int_var);
    // printf("float_var = %2.f\n", float_var);
    // printf("double_var = %e\n", double_var);
    // printf("char_var = %c\n", char_var);
    // printf("bool_var = %d\n", bool_var);
    // printf("uint_var = %u\n", uint_var);
    // printf("sint_var = %d\n", sint_var);
    // //printf("ulli_var = %llu\n", ulli_var);
    // //printf("slli_var = %lld\n", slli_var);
    // printf("lli_var = %lld\n", lli_var);
    // printf("li_var = %ld\n", li_var);
    // printf("si_var = %d\n", si_var);
    // printf("ld_var = %d \n", ld_var);
    
    return 0;

}