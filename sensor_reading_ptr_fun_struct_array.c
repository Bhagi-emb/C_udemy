/*
reading a sensor values
using arrays,funtion pointers,struct
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct sensor{           //struct variables
    int senId;
    char sen_name[20];
    void(*read_sensor)();  //calling function pointer inside struct - function declaration
    void *ptr_sensor; 
};
void example_sensor_read()
{
    printf("sensor is reading ..... \n");
}
void print_sensor(struct sensor *p)
{
    printf("\n id : %d \t sensor name: %s , ptr :%d  \n",p->senId,p->sen_name,*(int*)p->ptr_sensor);
}
int main()
{
    struct sensor temp_sen;
    int var =10;
    temp_sen.senId =1;
    temp_sen.read_sensor=example_sensor_read;
    strcpy(temp_sen.sen_name,"moisturesensor");
    temp_sen.ptr_sensor = &var;

    print_sensor(&temp_sen);
    return 0;
}