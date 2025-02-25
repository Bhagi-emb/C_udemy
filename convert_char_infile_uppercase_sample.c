/*
fopen();
islower();
upperto(); // write to new file
rename(); //existing to temp
remove(); //temp
rename(); //update upper case file to orginal name
*/

#include<stdio.h>
#define a 97
#define z 122

int islower(int c)
{
    if( c >= a && c <= z)
    {
        return 1;
    }
    return 0;
}

int main()
{
    FILE *fp,*fp1;
    char str[1000];

    fp = fopen("tmp.txt","r");
    
    if(fp == NULL)
    {
        perror("errror opening file \n");
        return -1;
    }
    fread(str,sizeof(char),sizeof(str),fp);

    int i=0;
    fp1 = fopen("tmp1.txt","w");
    if(fp1 == NULL)
    {
        perror("errror opeing file \n");
        return -1;
    }

    while(str[i]!='\0')    // (OR) (ch = fgetc(fp)) != EOF)
    {
        if(islower(str[i]))  //lower lies from 61 to 7A
        {
            str[i] =  str[i] - 32;  //converting lower to upper  //ch = ch-32;
        }
        fwrite(&str[i],sizeof(char),1,fp1);   //fputc(ch,fp1);
        i++;
    }
    rename("tmp.txt","del.txt");
    rename("tmp1.txt","tmp.txt");
    fclose(fp);
    remove("del.txt");
    fclose(fp1);

    //printing the data
    fp = fopen("tmp.txt","r");
    
    if(fp == NULL)
    {
        perror("errror opening file \n");
        return -1;
    }
    char ch;
    while((ch=fgetc(fp)!= EOF))
    {
        printf("%c",ch);
    }
    return 0;
}