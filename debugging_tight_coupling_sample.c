/*
Tight coupling occurs when one module depends heavily on the internals of another module. //avoid 
Changes in one module can have ripple effects on others, 
making the system harder to maintain and extend. 
Tight coupling can also lead to increased complexity.
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

void printPoint(Point *p) {
    printf("Point: (%d, %d)\n", p->x, p->y);
}

int main() {
    Point p = {0, 0};
    
    // Functions are tightly coupled, as they rely on the Point structure's internals
    movePoint(&p, 10, 20);
    printPoint(&p);
    
    return 0;
}
