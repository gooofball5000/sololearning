#include <iostream>

int main() {
    // Variables
        // Creating a variable reserves a memory location, or a space in memory for storing values. The compiler requires that you provide a data type for each 
        //  variable you declare. C++ offer a rich assortment of built-in as well as user defined data types. 

        // Integer, a built-in type, represents a whole number value. Define integer using the keyword int. C++ requires that you specify the type and the 
        //  identifier for each variable defined.

        // An identifier is a name for a variable, function, class, module, or any other user-defined item. An identifier starts with a letter (A-Z or a-z) or an 
        //  underscore (_), followed by additional letters, underscores, and digits (0 to 9).

    // Example
    int myVariable = 10;

        // Now, lets assign a value to a variable and print it
            // The C++ programming language is case-sensitive, so myVariable and myvariable are two different identifiers.

    std::cout << "My Variable: " << myVariable << "\n";
    // After using C format specifiers (%s, %d, %f, etc.), I really hate having to use the insertion operator a million times to add newlines or similar

        // efine all variables with a name and a data type before using them in a program. In cases in which you have multiple variables of the same type, it's 
        //  possible to define them in one declaration, separating them with commas

    // Example
    int a, b;

        // A variable can be assigned a value, and can be used to perform operations. It's possible to create an additional variable called sum, and add two 
        //  variables together.
    
    // For example
    a = 30;
    b = 15;
    int sum = a + b; //// Sum now equals 45

    return 0;
}