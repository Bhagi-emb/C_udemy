#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int c, count = 0;

    // Open file in append mode ("a"), creates file if it doesn't exist
    fp = fopen("tmp.txt", "a");
    if (fp == NULL) {
        perror("Error opening file");
        return -1;
    }

    // Writing to file
    fprintf(fp, "hello there \n");
    fclose(fp);
    fp = NULL;

    // Reopen file in read mode
    fp = fopen("tmp.txt", "r");
    if (fp == NULL) {
        perror("Error opening file for reading");
        return -1;
    }

    // Reading data from file and counting new lines
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);  // Print character
        if (c == '\n') {  // Count newlines
            count++;
        }
    }

    printf("\nNumber of new lines: %d\n", count);

    fclose(fp);
    fp = NULL;
    return 0;
}
