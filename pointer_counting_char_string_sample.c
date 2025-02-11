/*
with condtions counting char string with pointers
*/
#include<stdio.h>
#include<stdlib.h>

int str_len(const char *str)
{
    /*basic*/
    int size;
    for (size =0 ;*str!='\0';str++,size++);
    return size;

    /*advanced*/
    // const char *lastaddress = str;   //assigning the string to ptr
    // for( ;*lastaddress; ++lastaddress);  //until ptr is not equal to null ptr increment - this give as postion of string 
    // return (lastaddress-str);     //last postion - first postion

}


int main()
{
    printf(" \n string length : %d \n",str_len("stringlength test"));
    return 0;
}
