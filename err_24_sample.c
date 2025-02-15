#include<stdio.h>
struct point
{
    int x;
    int y;
};
void foo(struct point p[])
{
    printf("%d\n",p->x);
}
int main()
{
    struct point p1[]={1,2,3,4};
    foo(p1);
}