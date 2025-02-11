/*
copying a ptr string into each other using strcpy
*/
#include<stdio.h>
#include<string.h>
int main ()
{
    char *str= "hello, world\n";
    char *strc= "good morining\n";
    strcpy(strc,str);
    printf("\n %s\n",strc);   //crash/segmenatation fault
    return 0;
}

/*
Explaination:
The variable str is a pointer to the string literal "hello, world\n", 
which is typically stored in a read-only section of memory.

The variable strc is a pointer to another string literal "good morning\n", 
which is also stored in a read-only section of memory.

In C, string literals are usually immutable, meaning that you cannot modify them. 
If you attempt to modify a string literal (which is what strcpy(strc, str) does), 
it results in undefined behavior, 
often causing a segmentation fault because you're trying to modify a read-only memory location.
*/