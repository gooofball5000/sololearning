#include <stdio.h>
#include <stdlib.h>

int main() {
    // Exception handling
        // Central to good programing practices is using error handling techniques. Even the most solid coding skills may not keep a program from crashing should
        //  you forget to include exception handling

        // An exception is any situation that causes your program to stop normal execution. Exception handling, also called error handling, is an approach to
        //  processing runtime errors

        // C does not explicitly support exception handling, but there are ways to manage errors:
            // Write code to prevent the errors in the first place - You can't control user input, but you can check to be sure that the user entered valid input.
            //  When preforming division, take the extra step that division by 0 won't occur
            // Use the exit statement to gracefully end program execution. It may not be possible to control a file if it's available for reading, but you don't
            //  need to let it crash the program as a result

    // The exit command
        // The exit command immediately stops the execution of a program and sends an exit code back to the calling process. For example, if a program is called
        //  by another program, then the calling program may need to know the exit status

        // Using exit to avoid a program crash is a good practice because it closes any open file connections and processes

        // You can return any value through an exit statement, but 0 for success and -1 for failure are typical. The predefined stdlib.h macros EXIT_SUCCESS and
        //  EXIT_FAILURE are also commonly used

    // For example
    int x = 10;
    int y = 0;

    if(y != 0) {
        printf("x / y = %d", x/y);
    } else {
        printf("Divisor is 0. Exiting program...\n");
        exit(EXIT_FAILURE);
    }

    return 0;
}