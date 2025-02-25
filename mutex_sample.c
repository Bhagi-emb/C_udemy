//include these lib and run

// #include "FreeRTOS.h"
// #include "semphr.h"   
#include<stdio.h>

SemaphoreHandle_t xMutex;
int counter = 0;

void Task1() {
    xSemaphoreTake(xMutex, portMAX_DELAY);
    counter++;  // Safe access
    xSemaphoreGive(xMutex);
}

void Task2() {
    xSemaphoreTake(xMutex, portMAX_DELAY);
    counter++;  // Safe access
    xSemaphoreGive(xMutex);
}
int main() {
    Task1();
    Task2();
    printf("Counter: %d\n", counter);
    return 0;
}