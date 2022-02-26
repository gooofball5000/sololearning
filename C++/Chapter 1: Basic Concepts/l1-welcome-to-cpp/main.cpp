#include <iostream>

int main() {
    // Welcome to C++
        // C++ is a popular cross-platform language that can be used to create high-performance applications - operating systems, browsers, video-games, art 
        //  applications and so on.
            // C++ was derived from C, and is largely based on it.

        // A C++ program is a collection of commands or statements

    // Example
    std::cout << "This is how you print things to the screen. This example isn't actually in the lesson (yet), I just needed to put something here\n";

        // You will learn what each of the statements does in the upcoming lessons. For now, remember that the entry point of every C++ program is the main() 
        //  function, irrespective of what the program does.
            // Curly brackets { } indicate the beginning and end of a function, which can also be called the function's body. The information inside the 
            //  brackets indicates what the function does when executed.

    // Yout first C++ program
        // Let's print "Hello World" to the console. This is done by adding std::cout << "Hello World"; to the main function
    
    std::cout << "Hello world!\n";
    std::cout << "This " << "is " << "awesome!\n";

        // std::cout is used to preform output on the standard output device which is usually the display screen. std::cout is used in combination with the
        //  insertion operator <<
            // Note: Several insertion operators can be used in the same std::cout statement

            // In C++, the semicolon is used to terminate a statement. Each statement must end with a semicolon. It indicates the end of one logical expression.

    return 0;
}