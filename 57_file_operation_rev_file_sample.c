/* print the contents of file in reverse order*/
#include<stdio.h>
int main()
{
    FILE *fp;
    fpos_t pos;  // To store file position 
    char ch;
    
    fp = fopen("newfile.txt","w+");
   
    if(fp == NULL) return -1;
    // Step 2: Write data into the file
    fputs("hello how are you", fp);

    // Step 3: Move file pointer to end to determine file size
    fseek(fp, 0, SEEK_END);
    pos = ftell(fp);  // Get file size (last position)
    printf("Size of file: %lld bytes\n", pos);

    // Step 4: Read the file in reverse
    printf("File contents in reverse order:\n");
    while (pos > 0) {
        pos--;  // Move to previous character
        fseek(fp, pos, SEEK_SET);
        ch = fgetc(fp);  // Read character
        printf("%c", ch);
    }
    printf("\n");
    fclose(fp);
    return 0;
}

/*
Uses fseek(fp, 0, SEEK_END) to move to the end of the file.
Uses fgetc(fp) to read character-by-character in reverse.
Uses fseek(fp, pos-1, SEEK_SET) to move back correctly.
Fixes file mode ("w+") to allow both writing and reading.
Closes file properly (fclose(fp)) to avoid memory leaks.
*/