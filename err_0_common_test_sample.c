

/*********** const pointer eg 2 ***********************/
// #include <stdio.h>

// int main() {
//     int num = 10;
//     void *ptr=(int*)&num;
   
//     printf("\n res - %d ",*(int*)(ptr));    
//     return 0;
// }
/*********** const pointer eg 1 ***********************/

// #include <stdio.h>

// int main() {
//     int num = 10;
//     void *ptr=(int*)&num;
   
//     printf("\n res - %d ",(*ptr));    
//     return 0;
// }
//o/p: complier error: argument type 'void' is incomplete
/*********** square root give number using pass by ref ***********************/

// #include <stdio.h>
// void squr(int *p)
// {
//     *p *= *p;
// }
// int main() {
//     int num = 10;
//     int *ptr=&num;
//     squr(ptr);
//     printf("\n square root - %d ",(*ptr));    
//     return 0;
// }
