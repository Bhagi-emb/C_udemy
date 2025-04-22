#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*check terminal path before execution*/
int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);  //for string with spaces
    //scanf("%99[^\n]%*c", s);  //for string with spaces
    //scanf("%s", s);  //for string without spaces
    //scanf("%[^\n]s", s);  //for string sentences
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    printf("Hello, World!\n");   
    printf("%s",s);
    return 0;
}

/*
Tip:
scanf("%99[^\n]%*c", s); // if s[100]
Always specify a field width to avoid buffer overflows:
The field width (99 in this case) limits the number of characters read to prevent buffer overflow.

%[^\n]

This is a scanset.
It means: "Read and store all characters until a newline (\n) is encountered."
The ^ inside the brackets negates the character set, so ^\n means “everything except newline.”
This is how you capture input that includes spaces (e.g., "Welcome to C programming").

%*c

%c reads one character (in this case, the newline that remains in the input buffer after %[^\n]).
The * tells scanf to read it but not store it — it just discards the newline.
This is important to prevent the newline from being left in the buffer, which might affect further input operations.
*/