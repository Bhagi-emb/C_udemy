#include<stdio.h>
struct data {
    char name[10];
    int num;
    int roll_num;
};

int main()
{
    struct data d[3] = {{"abc",123,1},{"cde",135,2},{"efbc",183,3}};
    for (int i=0; i<3;i++)
    {
        printf(" name: %s  num: %d  roll number : %d \n",d[i].name,d[i].num,d[i].roll_num);
    }

}

/* valid statments:
1) struct data d[3] = {{"abc",123,1},{"cde",135,2},{"efbc",183,3}};
2) struct data d[3] = {"abc",123,1,"cde",135,2,"efbc",183,3};
3) struct data d[3] = {[2]={"abc",123,1}};
*/