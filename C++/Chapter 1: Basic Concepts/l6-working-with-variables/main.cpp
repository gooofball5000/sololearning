#include <iostream>

int main() {
    // Declaring variables
        // You have the option to assign a value to the variable at the time you declare the variable or to declare it and assign a value later. You can also 
        //  change the value of a variable.
            // You can assign a value to a variable only in a declared data type.

    // Example
    int a;
    int b = 42;

    a = 10;
    b = 3;

    // User input
        // To enable the user to input a value, use std::cin in combination with the extraction operator (>>). The variable containing the extracted data follows 
        //  the operator
            // As with std::cout, extractions on std::cin can be chained to request more than one input in a single statement: std::cin >> a >> b;
      
    // Example
    int num;
    std::cin >> num;

    // Accepting user input
    
    // Example
    int c;
    std::cout << "Please enter a number\n";
    std::cin >> c;
    std::cout << "The user entered: " << c << "\n";

        // When the program runs, it displays the message "Please enter a number", and then waits for the user to enter a number and press Enter, or Return. The 
        //  entered number is stored in the variable a. 
            // The program will wait for as long as the user needs to type in a number.

    return 0;
}