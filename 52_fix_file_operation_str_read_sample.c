#include <stdio.h>

int main() {
    FILE *fp;
    char str[1000];

    // Open file in read mode
    fp = fopen("tmp.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return -1;
    }

    // Read file line by line using fgets()
    while (fgets(str, sizeof(str), fp) != NULL) {      //updated to while from if
        printf("%s", str);  // Print each line
    }

    fclose(fp);
    fp = NULL;
    return 0;
}
