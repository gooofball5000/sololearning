#include <stdio.h>

int main() {
    // The while statement is a loop structure that executes a bit of code until the expression is false
        // If the expression never evaluates to false, it never ends
        // If the expression never evaluates to true, it never runs

    int i = 0;
    while(i < 8) { // Executes the loop 8 times
        printf("This is a loop. Loop count: %d\n", i + 1);
        i++;
    }

    // The do-while loop runs the code inside the loop at least once, then checks the expression if it's true

    int count = 0;

    do {
        printf("Count: %d\n", count);
        count++;
    } while (count < 8);

    // Although break statements were introduced for switch statements, they're also useful for breaking out of loops

    int num = 5;
    while(num > 0) {
        if(num == 3) {
            break;
        }
        printf("Num: %d\n", num);
        num--;
    } // This should print all numbers between 5 and 1, but stops at 3 (without printing the number)

    // If you want to remain in the loop, but skip the iteration, use the continue statement

    num = 6;
    while(num > 0) {
        num--;
        if(num == 3) {
            continue;
        }
        printf("Num 2: %d\n", num);
    } // This skips printing the 3rd value, but still remains in the loop

    return 0;
}