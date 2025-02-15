#include<stdio.h>
struct st
{
    char *c;
};
void main()
{
    struct st m;
    struct st *s =&m;
    s->c="hello";
    printf("%s",s->c);
}
