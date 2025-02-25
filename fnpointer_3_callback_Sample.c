/* Function Pointer as Function Parameter (Callback) */
#include <stdio.h>

// Function to be passed as a callback
void greetMorning() {
    printf("Good Morning!\n");
}

void greetEvening() {
    printf("Good Evening!\n");
}

// Function that takes a function pointer as a parameter
void executeGreeting(void (*greetFunc)()) {
    greetFunc(); // Calls the passed function
}

int main() {
    executeGreeting(greetMorning);
    executeGreeting(greetEvening);
    
    return 0;
}
