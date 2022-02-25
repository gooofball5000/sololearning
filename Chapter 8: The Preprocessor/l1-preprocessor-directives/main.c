#include <stdio.h>
#include <string.h>

int main() {
    // Preprocessor Directives
        // The C preprocessor uses the # directives to make substitutions in program source code before compilation. For example, the line #include <stdio.h> is
        //  replaced by the contents of the stdio.h header file before compilation

        // Preprocessor directives and their uses:
            // #include : including header files
            // #define, #undef : Defining and undefining macros
            // #ifdef, #ifndef, #if, #else, #elif, #endif : Conditional compilation
            // #pragma : implementation and compiler specific
            // #error, #warning : Output an error or warning message. An error halts compilation
                // DO NOT PUT SEMICOLONS ";" AFTER DIRECTIVES

    // The #include directive
        // The #include directive is for including header files in a program. A header file declares a collection of functions and macros for a library, a term 
        //  that comes from the way the collection of code can be reused

        // A list of some useful C libraries:
            // stdio : input/output functions, including printf and file operations
            // stdlib : memory management and other utilities
            // string : functions for handling strings
            // errno : errno global variable and error code macros
            // math : common mathematical functions
            // time : time/date utilities

        // Corresponding header files for the libraries end with .h by convention. The #include directive expects brackets <> around the header filename if the
        //  file should be searched for in the compiler include paths

        // A user-defined header file is also given the .h extension, but is reffered to with quotation marks, such as "mylib.h". When quotation marks are used,
        //  the file is searched for in the source code directory

    // Example
    #include <time.h>
    #include "mylib.h"

    // The #define directive
        // The #define directive is used to create object-like macros for constants based on values or expressions. #define can also be used to create function-like
        //  macros with arguments that will be replaced by the preprocessor

        // Be cautious with function-like definitions. Keep in mind that the preprocessor does a direct replacement without any calculations, which can lead to
        //  unexpected results

    // Example
    #define PI 3.14
    #define AREA(r) (PI*r*r)

    float radius = 2;
    printf("Pi equals: %3.2f\n", PI);
    printf("Area: %f\n", AREA(radius));
    printf("Area with radius + 1: %f\n", AREA(radius + 1));

        // Before compilation, the preprocessor expands every macro identifier. In this case, every occurrence of PI is replaced with 3.14 and AREA(arg) is 
        //  replaced with the expression PI*arg*arg. The final code sent to the compiler will already have the constant values in place. Not what we may expect! 
        //  However, if you consider that #define works strictly by replacing text, you will see that AREA(radius+1) becomes PI*radius+1*radius+1, which is 
        //  3.14*2+1*2+1. 

        // The solution to this is to enclose each parameter in parentheses to obtain the correct order of operations.

    #undef AREA
    #define AREA(r) (PI*(r)*(r))

    printf("Pi equals: %3.2f\n", PI);
    printf("Area: %f\n", AREA(radius));
    printf("Area with radius + 1: %f\n\n", AREA(radius + 1));    

    // Formatting preprocessor directives
        // When using preprocessor directives, the # must be the first character on a line. But there can be any amount of white space before # and between the 
        //  # and the directive. If a directive is lengthy, you can use the \continuation character to extend the definition over more than one line.

    // Example
    #define VERY_LONG_CONSTANT \
        23.678901

    #define MAX 100
    #define MIN 0
    #define SQUARE(x) \
        x*x

    // Predefined macro definitions
        // In addition to user-defined macros, there are several predefined macros that are always available in C without requiring the #include directive
            // __DATE__ : The current date as a string formatted in mm dd yy
            // __TIME__ : The current time as a string formatted in hh:mm:ss
            // __FILE__ : The current filename as a string
            // __LINE__ : The current line number as an int
            // __STDC__ : 1

    // Example
    char curr_time[10];
    char curr_date[12];
    int std_c;

    strcpy(curr_time, __TIME__);
    strcpy(curr_date, __DATE__);
    
    printf("%s %s\n", curr_time, curr_date);
    printf("This is the line %d\n", __LINE__);
    
    std_c = __STDC__;
    printf("STDC is %d\n", std_c);

    return 0;
}