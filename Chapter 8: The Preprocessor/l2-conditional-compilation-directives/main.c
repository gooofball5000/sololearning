#include <stdio.h>

int main() {
    // The #ifdef, #ifndef, and #undef directives
        // The ifdef, ifndef, and undef directives operate on macros created with #define. For example, there will be compilation problems if the same macro is
        //  defined more than once. This can be checked with #ifdef directive. If you want to redefine a macro, use #undef

    // Example
    #define RATE 0.08
    
    #ifndef TERM
        #define TERM 24
    #endif

    #ifdef RATE
        #undef RATE
        printf("Redefining RATE...\n");
        #define RATE 0.068
    #else
        #define RATE 0.068; //// This won't be compiled
    #endif

    printf("%4.3f %d\n", RATE, TERM);

        // Because RATE is defined at the top, only the ifdef clause will be compiled. The optional else branch compiles when ifdef RATE is false during preprocessing

        // An #endif is required to close any variation of an #if statement

    // Conditional compilation directives
        // Conditional compilation of segments of code is controlled by a set of directives:
            // #if, #else, #elif, #endif

    // Example
    #define LEVEL 4

    #if LEVEL > 6
        printf("Great job!\n");
    #elif LEVEL > 5
        printf("Pretty good\n");
    #elif LEVEL > 4
        printf("Respectable\n");
    #else
        printf("Unacceptable\n");
    #endif 

        // There are instances where such conditional compilation can be useful, but this type of code should be used sparingly. The defined() preproccessor operator
        //  can be used with #if, as in:

    // Example
    #if !defined(LEVEL)
        printf("Are you new here?\n");
    #endif

        // #if and if statements are not interchangeable. The #if statement is evaluated using info available to the preprocessor, which then sends only the true
        //  branch for compilation
            // An if statement uses data provided at runtime with the possibility of branching to any else clause

    return 0;
}