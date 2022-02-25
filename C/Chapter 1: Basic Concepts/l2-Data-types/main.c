#include <stdio.h>

#define DEFINED_PI 3.14

int main() {
    // C supports the following basic datatypes
    int integer = 0;
    float floatingPoint = 0.0;
    double longerFloat = 0.00;
    char singleCharacter = 'c';

    printf("Size of int: %ld bytes\n", sizeof(int));
    printf("Size of float: %ld bytes\n", sizeof(float));
    printf("Size of double: %ld bytes\n", sizeof(double));
    printf("Size of char: %ld bytes\n", sizeof(char));

    // Variables can be initialized with a value or without
    //  A variable's value can be set at practically any time, not just during initialization
    int myVar1 = 1;
    
    int myVar2;
    myVar2 = 2;

    // Some basic math:
    int a, b;
    float salary = 56.23;
    char letter = 'Z';

    a = 8;
    b = 34;
    int c = a + b;

    printf("c = %d\n", c);
    printf("Salary: %f\n", salary);
    printf("Letter %c\n", letter);

    // Constants are variables that can't be changed after its initial assignment
    //  Trying to reassign a constant's value results in an error
    const double pi = 3.14;
    printf("Value of pi: %f\n", pi);

    // The #define directive can also be used to define a constant.
    //  #define is a pre-processor directive, meaning the pre-processor
    //  handles it before complilation. It replaces the keyword with
    //  anything the user defines, which can include other code
    // Any #define-s should be placed at or near the top of the file
    printf("Value of DEFINED_PI: %f\n", DEFINED_PI);

    // The difference between a const var and a #define is that a
    //  const uses memory, while a #define doesn't. Useful to know
    //  if you're ever extremely strapped for memory

    return 0;
}