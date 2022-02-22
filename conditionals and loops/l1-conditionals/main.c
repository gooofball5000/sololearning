#include <stdio.h>

int main() {
    // Conditionals do different things depending on whether an evaluation returns true or false
    
    /* An if statement looks like this
    if(expression) {
        statements
    }
    */// If the expression is true, the statements are executed. Otherwise, the statements are skipped

    int score = 89;
    if(score > 75) {
        printf("Score: %d\nYou passed!\n\n", score);
    }

    // Relational operators can be used to form a boolean expression, which returns true or false
        // >  : Greater than
        // <  : Less than
        // >= : Greater than or equal to
        // <= : Less than or equal to
        // == : Equal to
        // != : Not equal to

        int a = 13;
        int b = 12;

        a > b; // True
        a < b; // False
        a >= b; // True
        a <= b; // False
        a == b; // False
        a != b; // True

        int num = 41;
        num += 1;
        if(num == 42) {
            printf("You won!\n\n");
        }

        // Expressions that evaluate to non-zero are treated as true
        int in_stock = 20;
        if(in_stock) {
            printf("In-Stock: %d\nOrder recieved\n\n", in_stock);
        }

        // If-else statement can run different code depending on the result of the expression
            // The if part runs if true
            // The else part runs if false

        if(score > 90) {
            printf("Top 10%%\n");
        } else  {
            printf("Less than 90\n");
        }

        // Conditional expression
            // Using ? can make a condensed if statement

        int y, x = 3;

        y = (x >= 5) ? 5 : x;
        
        /* Equivalent to:
        if(x >= 5) {
            y = 5;
        } else {
            y = x;
        }
        */

    return 0;
}