#include <iostream>

int main() {
    // Assignment operators
        // The simple assignment operator (=) assigns the right side to the left side. C++ provides shorthand operators that have the capability of performing 
        //  an operation and an assignment at the same time

    // Example
    int x = 10;
    x += 4; //// Equivalent to x = x + 4
    x -= 5; //// Equivalent to x = x - 5

        // The same shorthand sytax applies to the multiplication, division, and modulus operators

    // Example
    x *= 3; //// Same as x = x * 3
    x /= 2; //// Same as x = x / 2
    x %= 4; //// Same as x = x % 4

    // Increment operator
        // The increment operator is used to increase an integer's value by one, and is a commonly used C++ operator
            // The increment operator is used to increase an integer's value by one.

    // Example
    x++; //// Same as x = x + 1

        // The increment operator has two forms, prefix and postfix

    // Example;
    ++x; //// prefix
    x++; //// postfix

        // Prefix increments the value, and then proceeds with the expression.
        // Postfix evaluates the expression and then performs the incrementing. 

    // Prefix example
    x = 5;
    int y = ++x;
    //// x is 6, y is 6

    // Postfix example
    x = 5;
    y = x++;
    //// x is 6, y is 5

        //The prefix example increments the value of x, and then assigns it to y. The postfix example assigns the value of x to y, and then increments it.

    // The Decrement Operator
        // The decrement operator (--) works in much the same way as the increment operator, but instead of increasing the value, it decreases it by one.

    return 0;
}