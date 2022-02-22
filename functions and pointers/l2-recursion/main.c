#include <stdio.h>

int factorial(int x);

int main() {
    // Recursive functions call themselves. Can be useful in error handling or a repeating task

    int num = 5;

    printf("The factorial of %d is %d\n", num, factorial(num));
    return 0;
}

int factorial(int a) {
    if(a == 1) {
        return 1;
    } else {
        return a * factorial(a - 1);
    }
}