/*
A high-cohesion module focuses on a specific, well-defined task. 
All functions and data structures within the module are related to that task. 
This makes the module easier to maintain, test, and extend.
*/


// High Cohesion: A module that handles operations on a specific entity (e.g., Point in 2D space)

#include <stdio.h>

// Structure to represent a point in 2D space
typedef struct {
    int x;
    int y;
} Point;

// Function to create a new point
Point createPoint(int x, int y) {
    Point p;
    p.x = x;
    p.y = y;
    return p;
}

// Function to print a point
void printPoint(Point p) {
    printf("Point: (%d, %d)\n", p.x, p.y);
}

// Function to calculate the distance between two points
double calculateDistance(Point p1, Point p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}


int main()
{
    return 0;
}


/*
In this example, 
the functions and data are highly cohesive because they all revolve around the concept of a 2D point.
All the functions—creating a point, printing a point, 
and calculating the distance between two points—are directly related to handling 2D points.
*/