#include <stdio.h>

void print_value(void *ptr, char type) {
    // Depending on the type of data, cast the void pointer accordingly and print
    if (type == 'i') {
        // Integer
        printf("Integer: %d\n", *((int*)ptr));
    }
    else if (type == 'f') {
        // Float
        printf("Float: %.2f\n", *((float*)ptr));
    }
    else if (type == 'c') {
        // Character
        printf("Char: %c\n", *((char*)ptr));
    }
    else if (type == 'd') {
        // Double
        printf("Double: %.2f\n", *((double*)ptr));
    }
    else {
        printf("Unknown type\n");
    }
}

int main() {
    int a = 5;
    float b = 3.14f;
    char c = 'X';
    double d = 6.28;

    // Declare void pointers and assign them to specific data types
    void *ptr;

    // Point to integer variable and call print_value
    ptr = &a;
    print_value(ptr, 'i');

    // Point to float variable and call print_value
    ptr = &b;
    print_value(ptr, 'f');

    // Point to character variable and call print_value
    ptr = &c;
    print_value(ptr, 'c');

    // Point to double variable and call print_value
    ptr = &d;
    print_value(ptr, 'd');

    return 0;
}
