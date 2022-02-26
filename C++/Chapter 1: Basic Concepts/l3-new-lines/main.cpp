#include <iostream>

int main() {
    // Newlines
        // The cout object does not insert a line-break at the end of the output. One way to print newlines is by using the endl manipulator, which will insert a 
        //  linebreak

    // Example
    std::cout << "This is a line" << std::endl;
    std::cout << "This is another line" << std::endl;

        // The newline character '\n' can be used as an alternative to endl. Using a single cout statement with as many instances of \n as your program requires 
        //  will print out multiple lines of text. 

    std::cout << "Hello World!\n";
    std::cout << "I love programming!\n";

    return 0;
}