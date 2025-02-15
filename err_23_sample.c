/* copying in struct */
#include<stdio.h>
struct student
{
    char *name;
};
struct student s[2];
void main()
{
    s[0].name="jason";
    s[1]=s[0];
    printf("%s %s ",s[0].name,s[1].name);
    s[1].name="fedin";
    printf("%s %s ",s[0].name,s[1].name);
}