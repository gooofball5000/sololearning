#include <stdio.h>

int main() {
    // The expressions && (and) and || (or) are used to make a compound boolean expression. ! reverses the result of an expression
        // Possible results for &&:
            //===========================
            // True && True     | True  |
            // True && False    | False |
            // False && True    | False |
            // False && False   | False |
            //===========================
            // Both operands must be true for && to return true
        
        // Possible results for ||:
            //===========================
            // True || True     | True  |
            // True || False    | True  |
            // False || True    | True  |
            // False || False   | False |
            //==========================+
            // One operand must be true for || to return true

        // Possible results for !:
            //===================
            // !True    | False |
            // !False   | True  |
            //===================
            // The ! operand flips the state of the boolean expression

    int n = 5;
    if(n > 0 && n <= 100) { // if n is greater than 0 AND n is greater than or equal to 100
        printf("Range: 1-100\n");
    }

    // Note: Compound boolean expressions evaluate from left to right and stop executing immediately if the result is false

    if(n == 999 || (n > 0 && n <= 100)) {
        printf("Invalid input\n");
    }

    return 0;
}