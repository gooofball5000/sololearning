#include <stdio.h>

int main() {
    // The switch statement branches program control by matching the result of an expression with a constant case vale
        // Looks better and more elegant than a continuous if-else-if statement

    int num = 3;

    switch(num) {
        case(1):
            printf("One\n");
        break;
        case(2):
            printf("Two\n");
        break;
        case(3):
            printf("Three\n");
        break;
        default:
            printf("Not 1, 2, or 3\n");
        break;
    }

    // Break statements are needed to stop execution of a set of code. No break will throw a compiller error
    // The default statement can be used if the value doesn't match any cases

    return 0;
}