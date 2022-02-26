#include <iostream>

int main() {
    // Comments
        // Comments are explanatory statements that you can include in the C++ code to explain what the code is doing. The compiler ignores everything that 
        //  appears in the comment, so none of that information shows in the result.

        // A comment beginning with two slashes (//) is called a single-line comment. The slashes tell the compiler to ignore everything that follows, until 
        //  the end of the line. 

    // Example
    //// prints "hello world"
    std::cout << "hello world\n";

    // Everything you've read that isn't code so far has been commented out so the compiler doesn't have a stroke

        // When the above code is compiled, it will ignore the '//// prints "hello world"' statement

    // Multiline comments
        // Comments that require multiple lines begin with /* and end with */. You can place them on the same line or insert one or more lines between them.
            // Comments can be written anywhere, and can be repeated any number of times throughout the code.

    // Example
    /* We are going to print:
        Hello world!
    */

   std::cout << "Hello world!\n";

    return 0;
}