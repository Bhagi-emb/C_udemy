#include <stdio.h>

int main() {
    FILE *fp;
    char str1[10], str2[10], str3[10];
    int year;

    // Open file in write and read mode (w+)
    fp = fopen("temp.txt", "w+");
    if (fp == NULL) {
        perror("Error opening file");
        return -1;
    }

    // Corrected the formatting (added space before 2024)
    fputs(" how are you 2024\n", fp);
    rewind(fp); // Reset file pointer to the beginning

    // Correct fscanf format specifier
    fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);
    printf("\nData: \n%s %s %s %d\n", str1, str2, str3, year);

    fclose(fp);
    return 0;
}
