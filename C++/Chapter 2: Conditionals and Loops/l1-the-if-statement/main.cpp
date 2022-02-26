#include <iostream>

int main() {
    // Decision making
        // The if statement is used to execute some code if a condition is true

    // Example
    if(true) {
        std::cout << "This statement is true\n";
    }

        // The syntax of an if statement looks like this:
            /*
            if (condition) {
                statement 1
                statement 2
                ...
                statement n
            }
            */

        // The condition specifies which expression is to be evaluated. If the condition is true, the statements in the curly brackets are executed
            // If the condition is false, the statements are simply ignored, and the program continues to run after the if statements body
    
        // Relational operators are used to evaluate conditions

    // Example
    if (7 > 4) {
        std::cout << "Yes\n";
    }

        // The if statement evaluates the condition (7>4), finds it to be true, and then executes the std::cout statement. If we change the greater operator to a 
        //  less than operator (7<4), the statement will not be executed and nothing will be printed out
            // A condition specified in an if statement does not require a semicolon.

    // Relational operators
        // The basic relational operators go as follows:
            // ========================================================
            // ===    >     === Greater than             === 7 > 4  ===
            // ===    <     === Less than                === 4 < 7  ===
            // ===    >=    === Greater than or equal to === 7 >= 4 ===
            // ===    <=    === Less than or equal to    === 4 <= 7 ===
            // ===    ==    === Equal to                 === 7 == 7 ===
            // ===    !=    === Not equal to             === 7 != 4 ===
            // ========================================================

    // Example
    if(10 == 10) {
        std::cout << "Yes\n";
    }

        // The not equal to operator evaluates the operands, determines whether or not they are equal. If the operands are not equal, the condition is evaluated 
        //  to true

    // Example
    if(10 != 10) {
        std::cout << "Yes\n";
    }

        // The above condition evaluates to false and the block of code is not executed.

        // You can use relational operators to compare variables in the if statement

    // Example
    int a = 55;
    int b = 33;
    if(a > b) {
        std::cout << "a is greater than b\n";
    }

    return 0;
}