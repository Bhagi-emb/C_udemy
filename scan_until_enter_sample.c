#include <stdio.h>

#define MAX_LENGTH 1000  // Maximum length for each sentence

int main() {
    char sentence[MAX_LENGTH];  // Array to hold the input sentence
    int i = 0;
    char ch;

    printf("Enter sentences (press Enter on an empty line to stop):\n");

    // Loop to read characters until Enter is pressed (empty line)
    while (1) {
        // Read a single character using getchar
        ch = getchar();

        // If Enter (newline) is pressed and the sentence is empty, exit the loop
        if (ch == '\n' && i == 0) {
            break;  // Exit when Enter is pressed on an empty line
        }

        // If Enter is pressed, add a null character to mark the end of the string
        if (ch == '\n') {
            sentence[i] = '\0';  // End the string
            printf("You entered: %s\n", sentence);
            i = 0;  // Reset index for next sentence
        } else {
            // Otherwise, add the character to the sentence array
            sentence[i++] = ch;
        }
    }

    printf("Exiting program.\n");
    return 0;
}
