#include <iostream>

int main() {
    // Arithmetic operators
        // C++ supports these arithmetic operators:
            // ======================================
            // === + === Addition       === x + y ===
            // === - === Subtraction    === x - y ===
            // === * === Multiplication === x * y ===
            // === / === Division       === x / y ===
            // === % === Modulus        === x % y ===
            // ======================================
                // You can use multiple arithmetic operators in one line.

        // The addition operator adds its operands together

    // Example
    int x = 40 + 60;
    std::cout << x << "\n";

        // Subtraction
            // The subtraction operator subtracts one operand from the other.

    // Example
    x = 100 - 60;
    std::cout << x << "\n";

        // Multiplication
            // The multiplication operator multiplies its operands.

    // Example
    x = 5 * 6;
    std::cout << x << "\n";

        // Division
            // The division operator divides the first operand by the second. Any remainder is dropped in order to return an integer value. 
                // If one or both of the operands are floating point values, the division operator performs floating point division.
                // Dividing by 0 will crash your program

    // Example
    x = 10 / 3;
    std::cout << x << "\n";

        // Modulus
            // The modulus operator (%) is informally known as the remainder operator because it returns the remainder after an integer division. 

    // Example
    x = 25 % 7;
    std::cout << x << "\n";

    // Operator precedence
        // Operator precedence determines the grouping of terms in an expression, which affects how an expression is evaluated. Certain operators take higher 
        //  precedence over others; for example, the multiplication operator has higher precedence over the addition operator. 

    // Example
    x = 5 + 2 * 2;
    std::cout << x << "\n";

        // The program above evaluates 2*2 first, and then adds the result to 5. As in mathematics, using parentheses alters operator precedence.

    x = (5 + 2) * 2;
    std::cout << x << "\n";

        // Parentheses force the operations to have higher precedence. If there are parenthetical expressions nested within one another, the expression within 
        // the innermost parentheses is evaluated first. 
            // If none of the expressions are in parentheses, multiplicative (multiplication, division, modulus) operators will be evaluated before additive 
            //  (addition, subtraction) operators.

    return 0;
}