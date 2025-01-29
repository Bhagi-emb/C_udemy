#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    double width = atoi(argv[1]);
    double height = atoi(argv[2]);
    double perimeter = 2 * (width + height);
    double area = width * height;
    printf("Perimeter of the rectangle = %f units\n", perimeter);
    printf("Area of the rectangle = %f sq units\n", area);
    return 0;
}