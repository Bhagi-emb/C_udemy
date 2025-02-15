/*
Program with structure using function pointer
valid statemnts: 
1)  void (*print)(struct point*)  :VALID
    print is a pointer to a function that takes a pointer to struct point as an argument and returns void.
2)  (void)(print*)(struct point*) :INVALID    
    print* is not a valid identifier.
3)  (void)(*print)(struct *point) : INVAILD
    This syntax is incorrect due to struct *point.
4)  (void)(print*)(struct *point) : INVAILD
    print* is an invalid identifier, and struct *point is not a valid way to declare a structure pointer.
*/

#include<stdio.h>


struct point {   //struct variables
    int x, y;
    void (*print)(struct point*);               // Function pointer for printing
    void (*move)(struct point*, int, int);      // Function pointer for moving
};

//function to print point
void printpoint(struct point *p)
{
    printf("points (%d,%d) \n",p->x,p->y);
}

//function to move points
void movepoint(struct point *p,int dx,int dy)
{
    p->x += dx;
    p->y += dy;
}
int main()
{
    struct point p ={10,20,printpoint,movepoint}; //p : struct variable

    //use the function pointers
    p.print(&p);
    p.move(&p,5,-10);
    p.print(&p);
    return 0;
} 

/* check: if we add typedef at struct 
#include <stdio.h>
typedef struct{
    int x;
    int y;
    void (*print)(struct point*);
    void (*move) (struct point* , int,int);
}point;

//function to print point
void printpoint(point *p)
{
    printf("points (%d,%d) \n",p->x,p->y);
}
// Function to move the point
void movepoint(point* p, int dx, int dy) {
    p->x += dx;
    p->y += dy;
}

int main() {
    // Initialize struct with values and function pointers
    point p1;
    p1.x=10;
    p1.y=20;
 
    p1.print = printpoint;
    p1.move = movepoint;

    // Use the function pointers
    p1.print(&p1);          // Prints initial position
    p1.move(&p1, 5, -10);   // Moves the point
    p1.print(&p1);          // Prints updated position

    return 0;
}

*/