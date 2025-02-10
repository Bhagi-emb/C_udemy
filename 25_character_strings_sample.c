/*
Sample program for char string
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* diff between single quote and double quote */
void diff_single_double()
{
    char s1[] = {'a','s','d','f'};  //single quote : char
    char s2[] ="hello!";   //double quote : char string end with \0 : remove {} for string

    printf(" char[0] :%c \t char[1]:%c \t char[2]:%c \t char[3]:%c \n string : %s \n",s1[0],s1[1],s1[2],s1[3],s2);
    /*string can print char by char */
    printf(" string[0] :%c \t string[1]:%c \t string[2]:%c \t string[3]:%c \n string[4] : %c \t string[5] : %c \n",s2[0],s2[1],s2[2],s2[3],s2[4],s2[5]);
}
/* Testing string with prints */
void test_print()
{
    printf("this is string \n ");
    printf("this is on \n two lines!\n");
    printf("for \"you write \\\" check plz.\n");

}

/*diff of Null pointer and null character*/
void check_nullchar_null()
{
// Null Pointer Example
    int *ptr = NULL; // A null pointer (does not point to any valid memory)
    
    if (ptr == NULL) {
        printf("Pointer is null.\n");
    } else {
        printf("Pointer is not null.\n");
    }
    
    // Null Character Example
    char str[] = "Hello, World!";  // A string
    printf("String: %s\n", str);  // Prints the string
    
    // Modifying the string by replacing a character with the null character
    str[5] = '\0';  // Insert null character at index 5 (after 'Hello')
    
    // After inserting the null character, the string is truncated
    printf("Modified string(insert null character): %s\n", str);  // Prints "Hello"
}

/*checking string size*/
void string_size()
{
    char s1[] = "hello world this is me  !";
    int size;
    for(size =0; s1[size]!= '\0' ;size++);  //double quote : char string end with \0 : remove {} for string
    printf("size of string : %d \n",size);
        
}

/* input data via char & string*/
void scan_string_char()
{
    char s1;     //single char
    char s2[15];  //single sentence size must provide

    printf("enter the single char \n");
    scanf("%c",&s1);
    
    printf("enter the single string \n");
    scanf("%s",s2);             //& not required as it is string

    printf("check single char :%c \n",s1);
    printf("check single string : %s \n",s2); //no spaces/enters
}

/*compare can be done by 2 ways 
: compare char by char in loop
: using string library strcmp()
*/
void str_compare()
{
    char s1[]= "hello";
    char s2[]= " hello";
    char s3[]= "hello";
    
    if(strcmp(s1,s2)==0)
        printf(" string1 and string 2 are same \n");  /*s2 has space at s2[0]*/
    if(strcmp(s1,s3)==0)
        printf(" string1 and string 3 are same \n");
}
int str_length(const char s1[])
{
    int size;
    for (size =0; s1[size]!='\0'; size++);    
    return size;
}


void str_reverse()
{
    const char s3[]= "hello";
    char s3_rev[10];   //assign memory is must
    int size =0;
    size = str_length(s3)-1;  //as last digit is null terminator 

    for (int i=0;size >= 0;size--,i++)  //greater than 
    {
        s3_rev[i]=s3[size];
    }

    s3_rev[str_length(s3)] = '\0';  // Null terminate the reversed string
    //s3_rev[size]= '\0';    //invalid size :: size as set as zero 

    printf(" string : %s \n reverse string: %s \n",s3,s3_rev);  

}
int main()
{
    //diff_single_double();
    //test_print();
    //check_nullchar_null();
    //string_size();
    //scan_string_char();
    //str_compare();
    str_reverse();
    return 0;
}

/*
Details:
Null Pointer (NULL):

A null pointer is a pointer that does not point to any valid memory location.
It's used to indicate that the pointer is intentionally not pointing to anything.
In C, the constant NULL is typically defined as ((void *)0), 
which is a pointer that does not point to any valid memory address.

Null Character ('\0'):

The null character is a special character in C used to terminate strings. 
It marks the end of a string in C, so that functions like printf, strlen, etc., 
know where the string ends.
It is represented by the character literal '\0' (ASCII value 0). 
*/