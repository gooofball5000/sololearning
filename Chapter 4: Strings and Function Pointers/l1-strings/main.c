#include <stdio.h>

int main() {
    // Strings
        // A string in C is an array of characters that ends with a NULL character '\0'. Strings can be made in several ways, each with their own merits
    
    char string[] = "this is a string";
        // This creates a string named string_name of str_len characters and initalizes it to the value "this is a string". When providing a string literal
        //  the compiler will automatically add the null character to the array. For this reason, a string must be declared to be one char longer than
        //  expected to fit the null character.

    char str1[6] = "Hello"; // String size: 6
    char str2[] = "world";  // String size: 6

    // Strings can also be defined as a set of characters. With this approach, the null character must be explicitly added
    char str3[12] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'}; // String size: 12

    // As with an array, the name of a string acts like a pointer
        // A string pointer declaration such as 
            //char *str = "stuff";
        //  is considered constant, and can't be changed

    // To safely and convinently operate with strings, use the following commands (remember to include <string.h>!)
        // strlen() : gets the length of a string
        // strcat() : merges two strings
        // strcpy() : copy one string to another
        // strlwr() : convert the string to lowercase
        // strupr() : convert the string to uppercase
        // strrev() : reverses the string
        // strcmp() : compare two strings

    // String input
        // To retrieve a line of text or other string from the user, C provides the scanf(), gets(), and fgets() function
    
    // scanf() can be used to read input according to format specifiers
    /*
    char firstname[25];
    int age;
    printf("Please enter your first name and age:\n");
    scanf("%s %d", firstname, &age);
    */

    // When scanf() is used to read a string, there is no need for the & symbol to access the variable address because array names act as a pointer
    // scanf() stops reading input when it reaches a space. To read a string with spaces, use the gets() function. It reads input until a newline is reached
        // A safer alternative to gets is fgets, which reads up to a specified number of characters. This stops buffer overflows, where the input text is bigger
        // than the size of the array

    /*
    char fullname[50] = {};
    printf("Enter your full name: ");
    fgets(fullname, 50, stdin);
    printf("Entered name: %s\n\n", fullname);
    */

    // The fgets() arguments are a string name, the number of characters to read, and the pointer to where you want to read the string from
        // stdin means to read from the standard input, which is the keyboard

    // String output
        // String output is handled with the fputs(), puts(), and printf() functions.
            // The fputs() function requires the name of the string and a pointer to where you want to print the string. To print to the screen, use stdout (aka standard output)

    char city[40];
    printf("Enter your city:\n");
    fgets(city, 40, stdin);

    fputs(city, stdout);
    printf(" is a fun city\n\n");
    
    // The puts function only takes a string argument and can be used to display output, but automatically adds a newline to the output

    return 0;
}