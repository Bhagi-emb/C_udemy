/*
getc() and fgetc() read character by character, including spaces.
fgets() reads an entire line, preserving spaces and newlines.
fscanf() reads word by word, ignoring spaces and newlines.
*/
#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];
    char ch;
    int num;

    // Open file in read mode
    fp = fopen("tmp.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return -1;
    }

    printf("Reading file using getc():\n");
    while ((ch = getc(fp)) != EOF) { // getc() reads one character at a time
        putchar(ch);
    }
    rewind(fp); // Reset file pointer to the beginning

    printf("\n\nReading file using fgetc():\n");
    while ((ch = fgetc(fp)) != EOF) { // fgetc() also reads one character at a time
        putchar(ch);
    }
    rewind(fp);

    printf("\n\nReading file using fgets():\n");
    while (fgets(str, sizeof(str), fp) != NULL) { // fgets() reads a full line
        printf("%s", str);
    }
    rewind(fp);
    /*
    fgetc()	
    int fgetc(FILE *stream);	
    Reads a character from the file. Returns EOF if end of file is reached.
    fgets()	
    char *fgets(char *str, int n, FILE *stream);	
    Reads a string from the file up to n-1 characters or until a newline is encountered.*/

    printf("\n\nReading file using fscanf():\n");
    while (fscanf(fp, "%s", str) != EOF) { // fscanf() reads word by word
        printf("%s ", str);
    }

    fclose(fp);
    return 0;
}
