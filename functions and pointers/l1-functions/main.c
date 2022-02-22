#include <stdio.h>

// Function prototype
int square(int num);
int sum_up(int a, int b);
void say_hello();

int main() {
    // Functions are vital to programming, and split tasks into a series of subtasks. You can make new functions
    // A function:
        // Is a block of code that preforms a specific task
        // Is resuable
        // Helps code readability
        // Makes a program easier to test
        // Can be modified without changing the program

    // It's easier to understand what a program is doing when split into subtasks
    // For example: This calculates the square of a number

    int c, result;
    c = 5;
    result = square(c);
    printf("%d squared is: %d\n", c, result);

    // In order to use a function, it must be declared. These definitions usually look like:
        // return_type function_name(parameter1, parameter2, ..., parameterN);
            // The return type is the data-type of the value passed back by a function
                // Functions don't have to return something, but a type must be declared nonetheless. Use the 'void' declaration to signal no returned value
            // The function name is the actual name of the function, and is followed by parentheses
            // The parameter(s) is an optional field for values that should be passed into the function

    // It's good practice (if not necessary) to prototype functions at the top of a file before use. A prototype just includes the return type, name, and parameters
    //  The stuff in the function can be placed here, but it's better to define the function after main(). The definition contains code, the prototype makes the func

    // A function's parameters are used to give the function a value that is required to run its code
    // Such values are passed by value, making a copy of the data and sending the copy to function. This means a passed in variable isn't changed if the value in
    //  the function is changed

    int x = 3, y = 12;
    result = sum_up(x, y);
    printf("%d + %d = %d\n", x, y, result);

    // Despite the sum_up function changing the first passed in value, the actual value doesn't change. This is because of pass by value

    // You already know what scope is. Variables inside functions are only available to that function. Variables outside functions are global
        // Function definitions also follow scope, so prototype them when possible

    // Static variables have local scope, but aren't cleared when a function exits. They can be accessed repeatedly through calling the same function 

    for(int i = 0; i < 10; i++) {
        say_hello();
    }

    return 0;
}

// Function definition
int square(int num) {
    return num * num;
}

int sum_up(int a, int b) {
    a += b;
    return a;
}

void say_hello() {
    static int num_calls = 1; // Because this is definition is for a static variable, it isn't ran more than once
    printf("Hello number %d\n", num_calls);
    num_calls++;
}