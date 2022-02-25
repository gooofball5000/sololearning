#include <stdio.h>

void say_hello(int num_times);

int add(int num1, int num2);
int subtract(int num1, int num2);
int divide(int num1, int num2);
int multiply(int num1, int num2);

int main() {
    // Function pointers
        // Since pointers can point to an address in any memory location, they can also point to the start of executable code. Pointers to functions, aka
        //  function pointers point to executable code for a function in memory. Function pointers can be stored in an array or passed as arguments to
        //  other functions

        // A function pointer declaration uses * like any other pointer
            // return_type (*func_name)(parameters)

        // Note: The parentheses around the function's name is not optional. Without them, the compiler will think the function is returning a pointer

        // After declaring the function pointer, it must be assigned to a function. The following example code declares a function and function pointer, assigns
        //  the function pointer to a function, then calls the function through its pointer

    void (*func_pointer)(int);
    func_pointer = say_hello;
    func_pointer(3);
    
        // A function name points to the start of executable code, just as an array name points to its first element. Therefore, although statements such as 
        //  func_ptr = &say_hello and (*func_ptr)(3) are correct, it isn't necessary to include the address operator & and the indirection operator * in the 
        //  function assignment and function call

    // Array of function pointers
        // An array of function pointers can replace a switch or an if statement for choosing an action, as in the following program:
    int x, y, choice, result;
    int (*op[4])(int, int);

    op[0] = add;
    op[1] = subtract;
    op[2] = multiply;
    op[3] = divide;

    printf("\nEnter two integers:\n");
    scanf("%d%d", &x, &y);

    printf("Enter 0 to add, 1 to subtract, 2 to multiply, and 3 to divide\n");
    scanf("%d", &choice);

    if(choice < 0 || choice > 3) {
        printf("Invalid operation. Please use numbers between 0 and 3 (inclusive)\n");
        return 1;
    }

    result = op[choice](x, y);

    printf("Result: %d\n\n", result);

        // The statement int (*op[4])(int, int); declares the array of function pointers. Each array element must have the same parameters and return type. 
        //  In this case, the functions assigned to the array have two int parameters and return an int. The statement result = op[choice](x, y); executes the 
        //  appropriate function based on the user's choice. The previously entered integers are the arguments passed to the function. 

    return 0;
}

void say_hello(int num_times) {
    for (int k = 0; k < num_times; k++) {
        printf("Hello!\n");
    }
}

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int divide(int num1, int num2) {
    return num1 / num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}