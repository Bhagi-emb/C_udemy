/*reading file using fgets*/
/*issue: 
This code will only read and print the first line of the file because 
fgets() reads one line at a time and you are calling it only once.
*/
#include<stdio.h>
int main()
{
    FILE *fp;
    char str[1000];

    fp=fopen("tmp.txt","r");
    if(fp == NULL)
    {
        perror("error, Opening a file");
        return -1;
    }

    if(fgets(str,1000,fp)!= NULL){  //getting file data into str upto 60 characters
        printf("%s",str);
    }

    fclose(fp);
    fp = NULL;
    return 0;
}