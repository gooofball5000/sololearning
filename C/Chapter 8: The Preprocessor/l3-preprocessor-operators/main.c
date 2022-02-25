#include <stdio.h>

int main() {
    // Preprocessor operators
        // The C preprocessor provides the following operators
            // The # Operator
                // The # macro operator is called the stringification or stringing operator and tells the preprocessor to convert a parameter to a string constant.
                //  Whitespaces on either side of the argument are ignored and escape sequences are recognized

    // Example
    #define TO_STR(x) #x
    printf("%s\n", TO_STR( 123\\12      ));

            // The ## Operator
                // The ## operator is also called the token pasting operator because it appends, or "pastes", tokens together

    // Example
    #define VAR(name, num) name##num

    int x1 = 125, x2 = 250, x3 = 500;
    printf("%d\n", VAR(x, 3));

    // This drove me insane for about 5 minutes while I tried to figure out how it worked. It literally slaps the 2 inputs together, turning (x, 3) to (x3)

    // That's it, this is the last lesson. Congrats!

    return 0;
}