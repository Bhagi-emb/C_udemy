/*
lets see what are default string functions
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char string1[] = "hello";
    char string2[] = " hello howa are you";
    char *s1 = "how's a";
    char *s2 = "hello howa are you";
    char *temp;

/*searching a string*/
    // temp = strchr(string1,'e');
    // if(strchr(string1,'e') != NULL)
    // {
    //     int index = temp - string1;
    //     printf("\n at postion : %d \n",index);
    // }

/* strchr with pointers */
    temp = strchr(s1,'s');
    if(strchr(s1,'s')!= NULL)
    {
        int index = temp - s1;
        printf("\n at postion : %d \n",index);
    }

/*first occurances of string*/
    temp = strstr(s1,'are');   /*  const char *h = "Hello, world!";  const char *n = "world"; char *res = strstr(h,n);*/
    if(strstr(s1,'are')!= NULL)
    {
        int index = temp - s1;
        printf("\n at postion : %d \n",index);   //on progress check 
    }
/*tokenizing strtok()*/

/*** no proper o/p */

}