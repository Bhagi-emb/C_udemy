/*
example of effect of adding an integer value to a pointer
*/

#include<stdio.h>
#include<string.h>

int main(void)
{
    char mux[]="a string";
    char *p = mux;  //assigning array to ptr
    printf("\n");
    for (int i=0; i < strnlen(mux,sizeof(mux)); ++i)
    {
        printf(" mux[%d]=%c \t *(p+%d) = %c \t &mux[%d] = %p \t p+%d = %p \t \n",i,mux[i],i,*(p+i),i,&mux[i],i,p+i);  
        //*(p+i) != (*p+i) both are diff :: *(p+i) - "a string" :: (*p+i) : a,b,c,d,..
    }
    return 0;
}

/*
syntax: size_t strnlen(const char *str, size_t maxlen);
Risk handling strlen: 
If the string is not null-terminated or if you are working with a non-null-terminated buffer, 
strlen can lead to undefined behavior because it will keep counting past the end of the buffer 
until it accidentally encounters a null byte.
*/