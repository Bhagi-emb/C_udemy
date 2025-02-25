/*
Here’s a C program demonstrating ftell(), fseek(), and fgetpos()/fsetpos() 
to track and manipulate the file position indicator.

ftell(); -> long ftell(FILE *fp);
fgetpos(); -> 
*/

#include <stdio.h>

int main() {
    FILE *fp;
    fpos_t pos;  // To store file position
    char ch;

    // Step 1: Open file in write mode and add some text
    fp = fopen("tmp2.txt", "w+");  // Open for reading & writing
    if (fp == NULL) {
        perror("Error opening file");
        return -1;
    }
    
    fputs("Hello, World!\nThis is a test file.", fp);
    
    // Move file pointer to the beginning for reading
    rewind(fp);
    
    // Step 2: Read first few characters and print their positions
    printf("Reading characters and checking positions:\n");
    for (int i = 0; i < 5; i++) {                           // till 5 postions its read
        ch = fgetc(fp);
        printf("Character: %c, Position: %ld\n", ch, ftell(fp));
    }

    // Step 3: Store the current position using fgetpos()
    fgetpos(fp, &pos);                              //get current postion
    printf("\nPosition stored using fgetpos(): %ld\n", (long)pos);

    // Step 4: Read some more characters
    printf("\nReading more characters:\n");
    for (int i = 0; i < 5; i++) {               //read 5 more chars
        ch = fgetc(fp);
        printf("Character: %c, Position: %ld\n", ch, ftell(fp));
    }

    // Step 5: Restore previous position using fsetpos()
    printf("\nRestoring to saved position...\n");
    fsetpos(fp, &pos);                              //set cursor at postion           
    
    // Read from restored position
    printf("Reading from restored position:\n");
    for (int i = 0; i < 5; i++) {
        ch = fgetc(fp);
        printf("Character: %c, Position: %ld\n", ch, ftell(fp));
    }

    fclose(fp);
    return 0;
}
