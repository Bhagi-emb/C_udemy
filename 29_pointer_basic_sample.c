#include<stdio.h>
/* %p - print address for *ptr **/

int main()
{
    int a = 10;
    int *ptr; //int *ptr = &a; // Pointer 'ptr' stores the address of 'a' //valid
    ptr =&a;    //*ptr =&a; //invalid statment
    //char *ptr1;
    //float *ptr2,*ptr3;

    // Accessing the value of 'a' using the pointer
    printf("\n Value of a: %d\n", a);      // Prints: 10
    printf("Address of a: %p\n", &a);   // Prints: (memory address of 'a')
    printf("Value stored at ptr: %d\n", *ptr);  // Dereferencing ptr, Prints: 10

    *ptr = 20;
    printf(" \n after assigining the value to ptr \n\n");
    printf("Value of a: %d\n", a);      // Prints: 20
    printf("Address of a: %p\n", &a);   // Prints: (memory address of 'a')
    printf("Address of a: %p\n", (void*)&ptr);   // Prints: (memory address of ptr)
    printf("Value stored at ptr: %d\n", *ptr);  // Dereferencing ptr, Prints: 20

    printf("\n size of ptr %d \n",(int)sizeof(ptr));//avoid waring type cast int
    return 0;
}