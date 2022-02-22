#include <stdio.h>

int main() {
    // C has a number of ways to get user input
    //  getchar() can get a single character from the user
    char a = getchar();
    printf("You entered: %c\n", a);

    // gets() is used to read input as an ordered sequence
    //  of characters, aka a string. A string is stored in
    //  a char array of a defined length
    char string[100];
    gets(string);
    printf("You entered: %s\n", string);

    // scanf() scans input that matches format specifiers
    int b;
    scanf("%d", &b);
    printf("You entered: %d\n", b);

    // The & symbol is the address-of operator. It gives the
    //  address (memory location) of a variable. This is
    //  needed because scanf places its value in an address

    // More scanf

    int c, d;
    printf("Enter 2 numbers: \n");
    scanf("%d %d", &c, &d);
    printf("Sum: %d\n", c + d);
    
    // Even more scanf

    // The scanf() function is used to assign input to variables. 
    // A call to this function scans input according to format specifiers that convert input as necessary.
    // If input can't be converted, then the assignment isn't made.
    // The scanf() statement waits for input and then makes assignments:

    int x;
    float num;
    char text[20];
    scanf("%d %f %s", &x, &num, &text);

    // Format specifiers:
        // %d = decimal
        // %c = character
        // %s = string
        // %f = float
        // %x = hexadecimal

    return 0;
} 