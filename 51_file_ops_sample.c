/*
C Program: Demonstrating getchar(), putchar(), scanf(), puts(), fputs() and printf()
*/
#include <stdio.h>

int main() {
    char ch;
    char str[100];
    int num;

    // getchar() & putchar()
    printf("Enter a single character: ");
    ch = getchar();  // Reads one character
    printf("You entered using getchar(): ");
    putchar(ch);  // Prints one character
    putchar('\n'); // Newline for better formatting

    // Clearing input buffer
    while (getchar() != '\n');

    // scanf() & printf()
    printf("Enter an integer: ");
    scanf("%d", &num);  // Reads an integer
    printf("You entered using scanf(): %d\n", num);

    // Clearing input buffer again
    while (getchar() != '\n');

    // gets() is unsafe; using fgets() instead
    printf("Enter a string (with spaces): ");
    fgets(str, sizeof(str), stdin);  // Reads a full line
    printf("You entered using fgets(): ");
    puts(str);  // Outputs a full line

    return 0;
}

/* explanation:
Why Do We Need to Clear the Input Buffer for getchar()?
In C, when we use getchar() after scanf(), 
unwanted leftover characters (like newline \n) from the input buffer can cause issues.

Issue Explanation
When scanf() reads input, it does not consume the newline (\n) character that is entered 
when pressing Enter. This leftover newline stays in the buffer and is read by 
getchar() in the next input operation, causing unexpected behavior.
*/