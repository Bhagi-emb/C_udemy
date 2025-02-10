#include <stdio.h>

// Define a struct for demonstration of pointer to struct
struct Point {
    int x;
    int y;
};

int main() {
    // 1. Pointer to int
    int num = 10;
    int *ptr_int = &num;

    // 2. Pointer to char
    char ch = 'A';
    char *ptr_char = &ch;

    // 3. Pointer to float
    float pi = 3.14;
    float *ptr_float = &pi;

    // 4. Pointer to double
    double pi_double = 3.14159;
    double *ptr_double = &pi_double;

    // 5. Pointer to long
    long large_num = 1000000;
    long *ptr_long = &large_num;

    // 6. Pointer to void (generic pointer)
    void *ptr_void = &num; // Pointer to int, but of type void

    // 7. Pointer to struct
    struct Point pt = {3, 4};
    struct Point *ptr_struct = &pt;

    // Display all pointers and dereferencing examples
    printf("1. Pointer to int\n");
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value pointed to by ptr_int: %d\n", *ptr_int);
    
    printf("\n2. Pointer to char\n");
    printf("Value of ch: %c\n", ch);
    printf("Address of ch: %p\n", (void*)&ch);
    printf("Value pointed to by ptr_char: %c\n", *ptr_char);
    
    printf("\n3. Pointer to float\n");
    printf("Value of pi: %.2f\n", pi);
    printf("Address of pi: %p\n", (void*)&pi);
    printf("Value pointed to by ptr_float: %.2f\n", *ptr_float);

    printf("\n4. Pointer to double\n");
    printf("Value of pi_double: %.5f\n", pi_double);
    printf("Address of pi_double: %p\n", (void*)&pi_double);
    printf("Value pointed to by ptr_double: %.5f\n", *ptr_double);

    printf("\n5. Pointer to long\n");
    printf("Value of large_num: %ld\n", large_num);
    printf("Address of large_num: %p\n", (void*)&large_num);
    printf("Value pointed to by ptr_long: %ld\n", *ptr_long);

    printf("\n6. Pointer to void\n");
    printf("Value pointed to by ptr_void (casting to int*): %d\n", *(int*)ptr_void);

    printf("\n7. Pointer to struct\n");
    printf("Value of pt.x: %d\n", pt.x);
    printf("Value of pt.y: %d\n", pt.y);
    printf("Address of pt: %p\n", (void*)&pt);
    printf("Value pointed to by ptr_struct (pt.x): %d\n", ptr_struct->x);
    printf("Value pointed to by ptr_struct (pt.y): %d\n", ptr_struct->y);

    return 0;
}
