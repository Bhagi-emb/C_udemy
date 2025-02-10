
/*
Loose coupling occurs when modules or functions have minimal dependencies on each other. 
When one module changes, the others remain unaffected,
which makes the system more maintainable and flexible.
Levels of Coupling (From Low to High) : Data Coupling,Stamp Coupling,Control Coupling,Common Coupling,Content Coupling
*/

#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

void movePoint(Point *p, int dx, int dy) {
    p->x += dx;
    p->y += dy;
}

void printPoint(Point p) {
    printf("Point: (%d, %d)\n", p.x, p.y);
}

int main() {
    Point p = {0, 0};
    
    // Functions are loosely coupled, as they only interact through the function arguments
    movePoint(&p, 10, 20);
    printPoint(p);
    
    return 0;
}


/*
Best Practices for Achieving Low Coupling in C
Pass only necessary data: 
Avoid sharing large amounts of data or entire structures unless necessary. 
Instead, pass only the data that is required by a function.

Use opaque types (abstract data types): 
Instead of exposing the internal structure of a data type, 
you can use pointers to opaque types, 
allowing functions to manipulate data without knowing the implementation details.

Avoid global variables: 
Global variables create unnecessary dependencies between modules. 
Instead, prefer passing data through function arguments.

Minimize shared state: T
he fewer global variables and shared states, the fewer dependencies there will be between modules.

Use interfaces (headers): 
Define clear and concise interfaces for your modules. 
Only expose what is necessary and hide internal implementation details.
*/