#include <stdio.h>

int main() {
    // C is designed to be a low-level language, but high enough that it's fairly human readable. Because of C's low level capabilities, it's possible to easily
    //  access memory locations and do memory-related operations

    // For example, the scanf() function places the value entered by the user at the location, or address, of the variable
        // The address-of symbol is &

    int num = 0;
    scanf("%d", &num);
    printf("You entered: %d\n\n", num);
    // &num is the address of num

    // Memory addresses are given as hexidecimal numbers. Hexidecimal, or hex, is a number system that uses 0-F (0123456789ABCDEF) to represent numbers 0-15
        // Hex makes reading addresses a lot easier by making them smaller

    int i = 0;
    printf("The address of i is: %x\n", &i);

    // Pointers are extremely important because it makes it easy to work with memory locations
        // They're fundamental to arrays, strings, other data structures and algorithms
    
    // A pointer is a variable which points to another variable's address. In other words, it "points" to the location assigned to a variable and can indirectly
        // access the variable

    // Pointers are defined as such:
        // pointer_type *identifier
    // Pointer type is the data-type the pointer will be pointing to, identifier is the name of the pointer.
    // The asterisk (*) is required to declare a pointer

    int j = 63;
    int *p = NULL;
    p = &j;

    printf("The address of j is: %x\n", &j);
    printf("p contains the address: %x\n", p);
    printf("The value of j is: %d\n", j);
    printf("p is pointing to the value %d\n", *p);

    // Notes:
        // Pointers should be initalized to NULL until given a valid location
        // Pointers can be assigned the address of a variable using the ampersand (&) sign
        // To see what a pointer is pointing to, use * again (*p). This is called derefferencing

    // Pointers in expressions
        // Pointers can be used in expressions just as any variable. Arithmetic operators can be applied to whatever the pointer is pointing to

    int x = 5, y;
    p = NULL;
    p = &x;

    y = *p + 2; // y is assigned 7 (5 + 2)
    y += *p; // y is assigned 12 (7 + 5)
    *p = y; // x is assigned to 12 (y = 12)
    (*p)++; // x is incremented to 13

    printf("p is pointing to the value: %d\n", *p);

    // Note:
        // Both the increment and decrement operator require the dereferenced pointer to be in parentheses

    return 0;
}