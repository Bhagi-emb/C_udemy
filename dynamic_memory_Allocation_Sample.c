#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *p_str1 = (char*)malloc(25*sizeof(char));
    strcpy(p_str1,"helloworld!");
    printf(" \n str1:%s \naddress :%u \n",p_str1,p_str1);

    char *p_str2 = (char*)calloc(25,sizeof(char));
    strcpy(p_str2,"longtime nosee!");
    printf(" \n str2:%s \naddress :%u \n",p_str2,p_str2);

    p_str1 = (char*)realloc(p_str1,25*sizeof(char));
    strcat(p_str1,"helloworld!");
    printf(" \n str1:%s \naddress :%u \n",p_str1,p_str1);

    free(p_str1);
    free(p_str2);
    return 0;
}