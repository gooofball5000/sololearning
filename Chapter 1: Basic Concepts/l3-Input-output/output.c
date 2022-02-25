#include <stdio.h>

int main() {
    // As there are multiple ways to get input, there are multiple ways to send output
    // putchar() outputs a single character
    char a = getchar();
    printf("You entered: ");
    putchar(a);

    // Puts, similar to gets, takes a string and puts it on the screen
    char b[100];
    gets(b);
    
    printf("You entered: ");
    puts(b);

    // printf formats output via format specifiers and escape characters:
    printf("The tree has %d apples in it.\n", 20);  // Prints: The tree has 20 apples<newline>
    printf("\"Hello World!\"\n");                   // Prints: "Hello World!"<newline>

    // Escape sequences:
        // \n: newline
        // \t: horizontal tab
        // \\: backslash
        // \': single quote
        // \": double quote

    return 0;
}