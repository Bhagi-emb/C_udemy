/*
String examples:
1)check strlen without using strlen
2)append s1 to s2 without using strcat
3) compare two string without using strcmp()

** not considering any string as pointer
*/

#include<stdio.h>
#include<stdlib.h>

int string_len(const char str[]);
void string_cat(char res[],const char str1[], const char str2[]);
int string_cmp(const char str1[], const char str2[]);

/*
char res[] / const char str1[] :: [] assign relevent memory  
char res :: assign single char byte to res
*/

int string_len(const char str[])
{
    int size;
    for(size=0; str[size]!= '\0' ; size ++);
    return size;
}

void string_cat(char res[],const char str1[], const char str2[])
{
    int s1_size = string_len(str1);
    int s2_size =string_len(str2);

    //append str 1 to res
    for(int var=0;var <= s1_size; var++)
    {
        res[var]= str1[var];
    }

    //append str2 to res
    for(int var=s1_size,i=0 ;i <= s2_size; i++, var++)
    {
        res[var] = str2[i];
    }
}

int string_cmp(const char str1[], const char str2[])
{
    int  s1_size, size, ret =0,s2_size;

    s1_size = string_len(str1);
    s2_size =string_len(str2);

    /*assign big number for comparing */
    if(s1_size < s2_size)
        size = s2_size;
    else
        size = s1_size;
    /* comparing s1 & s2 */
    for(int var=0;var <= size; var++)
    {
        if(str1[var] == str2[var]){
            ret =1;
        }
        else 
        {
            ret = 0;
            break;
        }
    }
    return ret;
}

int main()
{
    const char s1[] = "hello";
    const char s2[] = "how are you";
    char res[50];

    printf("\n \n string len : %d \n\n",string_len(s1));
    
    string_cat(res,s1,s2);  // res act as return data
    printf("concat res : %s \n\n",res);

    printf("compare :: 1-same  0-not same \n");
    printf("result of compare : %d \n ",string_cmp("hello","hello "));
    printf("result of compare : %d \n ",string_cmp("hello","whatsup"));

    return 0;

}