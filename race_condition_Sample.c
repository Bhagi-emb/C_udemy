#include <stdio.h>

int counter = 0;  // Shared resource

void Task1() {
    counter++;  // Read, Modify, Write (not atomic)
}

void Task2() {
    counter++;  // Read, Modify, Write (not atomic)
}

int main() {
    Task1();
    Task2();
    printf("Counter: %d\n", counter);
    return 0;
}
 /* for solution check mutex_Sample.c file 
 error:
Both Task1 and Task2 read counter = 0 at the same time.
Each increments it and writes back 1 instead of 2.
Result: The final counter value is incorrect due to the race condition.
 */