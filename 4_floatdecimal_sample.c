/*
 * Author: BHAGYASREE G
 * Date: FEB-2025
 * Version: 1.0
 *
 * Description: checking the floating decimal output
 * Repository: https://github.com/Bhagi-emb/C_udemy_sample.git
 *
 * Usage:
 *   Compile: gcc -o main filename.c
 *   Run: ./filename 
 */
#include<stdio.h>
int main(void)
{
    float float_var = 331.796789080;
    //printf("Storage size for float : %d \n", sizeof(float_var));
    printf("float_var_1 = %f\n", float_var);
    printf("float_var_1 = %2.f\n", float_var);
    printf("float_var_2 = %.2f\n", float_var);
    printf("float_var_2 = %.5f\n", float_var);
    printf("float_var_2 = %7.5f\n", float_var);
    return 0;
}