/*
for loop cannot be add at return statemnt
reason: 
the for loop itself control flow structure (repeated execution of code)
imagine when you use recursive function(fn call it self) - we can see deadlock condtions
*/

#include<stdio.h>
#include<stdlib.h>

int str_length(const char s1[])
{
    int size;
        
    return for(size =0; s1[size]!='\0'; size++); // not valid
}
//invaild program
int main()
{
    str_length("hello");
    return 0;
}