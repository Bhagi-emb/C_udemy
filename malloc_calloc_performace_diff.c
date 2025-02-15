#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10000000

int main() {
    clock_t start, end;
    double malloc_time, calloc_time;

    // malloc timing
    start = clock();
    int *arr1 = (int *)malloc(SIZE * sizeof(int));
    end = clock();
    malloc_time = (double)(end - start) / CLOCKS_PER_SEC;

    // calloc timing
    start = clock();
    int *arr2 = (int *)calloc(SIZE, sizeof(int));
    end = clock();
    calloc_time = (double)(end - start) / CLOCKS_PER_SEC;

    printf("malloc time: %f seconds\n", malloc_time);
    printf("calloc time: %f seconds\n", calloc_time);

    free(arr1);
    free(arr2);

    return 0;
}
