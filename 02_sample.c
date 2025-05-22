#include <stdio.h>

int main() {
    FILE *fp;

    // Open file in write and erase mode
    fp = fopen("file.txt", "w+");
    if (fp == NULL) {
        perror("Error opening file");
        return -1;
    }

    fputs("hello how are you",fp);
    fseek(fp,7,SEEK_SET);
    fputs("yes this is",fp);

    fclose(fp);
    remove("file.txt");
    return 0;
}
