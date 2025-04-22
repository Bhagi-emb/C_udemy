#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*check terminal path before execution*/
int main() 
{
    char ch, s[50], sen[100];
    
    scanf("%c%s""\n""%[^\n]s",&ch,s,sen);
    printf("%c\n%s\n%s",ch,s,sen);
   
    return 0;
}