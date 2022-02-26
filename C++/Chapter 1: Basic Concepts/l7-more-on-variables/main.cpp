#include <iostream>

int main() {
    // Variables
        // Specifying the data type is required just once, at the time when the variable is declared. After that, the variable may be used without referring to 
        //  the data type.
            // Specifying the data type for a given variable more than once results in a syntax error.

    // Example
    int a;
    a = 10;

        // A variable's value may be changed as many times as necessary throughout the program. 
    
    // Example
    int b = 100;
    b = 50;
    std::cout << b << "\n";

    // The auto keyword
        // The auto keyword allows you to automatically deduct the type of the variable being declared. It infers the data type of the variable from its value.
            // Any variable declared with the auto keyword should be initialized at the time of its declaration or there will be an error.

    // Example
    auto x = 4; //// Integer
    auto y = 3.37; //// Float 
    auto z = "hello"; //// String

    return 0;
}