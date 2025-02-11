/*
Using the pointer copying one string to another string 
*/

#include<stdio.h>
#include<string.h>

void str_copy(char *s1,char *s2,int size);

void str_copy(char *s1,char *s2,int size)
{

    // for(int i=0; i< size;i++)
    // {
    //     *(s2+i) = *(s1+i); 
    // }

    /* without using int i variable*/
    for(;*s1!='\0';)
    {
        *s2++ = *s1++; 
    }
    *s2 = '\0';  // adding null terminator at end
}

int main()
{
    char string1[]={"hello how are you !"};
    char string2[60];

    str_copy(string1,string2,strlen(string1));
    printf(" \n after copying : string 2: %s \n",string2);
}