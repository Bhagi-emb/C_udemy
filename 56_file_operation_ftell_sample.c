#include<stdio.h>
int main()
{
    FILE *fp;
    int len;
    fp=fopen("tmp2.txt","r");
    if( fp== NULL)
    {
        perror("error opening file ..");
        return -1;
    }
    fseek(fp,0,SEEK_END);   //seek_set,seek_cur,seek_end

    len=ftell(fp);
    fclose(fp);
    printf("total size of file :%d bytes \n",len);

}