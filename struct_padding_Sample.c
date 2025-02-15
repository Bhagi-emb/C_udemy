#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct size{
    int a; //4
    char c; //1
    double b; //8
    char arr[2]; //2
};


int main() {
    struct size s;
    printf("size of struct : %lu \n",sizeof(s)); 
    return 0;
}
/* ---------------------
    o/p: size : 16
    -------------------
    char arr[2];//2
    char c; //1
    int a; //4
    double b; //8
    ----------------
    o/p: size: 24   //bcoz of struct padding
    ----------------
    int a; //4           //strcut padding : 8 byte
    char c; //1              //strcut padding : 8 byte
    double b; //8            //strcut padding : 8 byte  ::seems like each data type as 8 bytes
    char arr[2]; //2
*/