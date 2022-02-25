#include <stdio.h>

int main() {
    // The for loop is a loop structure that executes code a fixed number of times
    /* Psuedocode for loop:
    for(initvalue, condition, increment/decrement) {
        statements
    }
    */

    // The initvalue is a counter set to an initial value. This is preformed only once
    // The condition is a boolean expression that compares the counter to a value before executing code. If true, run the code. Otherwise, break from the loop
    // The increment/decrement changes the counter by the desired number. This should eventually cause the condition to return false, or you get an infinite loop

    // Example for loop
    int max = 10;

    for(int i = 0; i < max; i++) {
        printf("%d\n", i);
    }

    // For loops can contain multiple expressions seperated by commas in each part

    for(int x = 0, y = 10; x < y; x++, y--) {
        printf("Loop till x < y\nX: %d\nY: %d\n\n", x, y);
    }

    // You can also skip any part of the for loop by leaving it blank
        //======================================================================
        // for(; x < 10; x++) | Skips initvalue                                |
        // for(;x < 10;)      | Skips inc/dec                                  |
        // for(;;)            | Skips conditional (ALWAYS TRUE, INFINITE LOOP) |
        //======================================================================
        // Any combination of the above can be skipped, just make sure the loop isn't endless

    // For loops can also be nested

    int i, j;
    int table = 15;
    max = 15;

    for(i = 1; i <= table; i++) {
        for(j = 0; j <= max; j++) {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Newline between tables
    }

    return 0;
}