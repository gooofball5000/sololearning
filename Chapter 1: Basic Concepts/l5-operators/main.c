#include <stdio.h>

int main() {
    // C supports several arithmetic operators:
        // + = Addition
        // - = Subtraction
        // / = Division
        // * = Multiplication
        // % = Modulus Division (The remainder of a division)

    // Muliplication example
    int length = 10;
    int width = 5;
    int area = length * width;

    printf("Length: %d\nWidth: %d\nArea: %d\n\n", length, width, area); // Prints "Area: 50"

    // Division example
        // Note: When both data-types are integers, C uses "truncated divison", where any remainder is discarded
        //  When either operator is a real number, the result is a real number.
        //  Modulus returns the remainder of an integer division, and can't be preformed on a float or double

    int i1 = 10;
    int i2 = 3;
    int quotient, remainder;
        
    float f1 = 4.2;
    float f2 = 2.5;
    float result;

    quotient = i1 / i2; // Equals 3
    remainder = i1 % i2; // Equals 1
    result = f1 / f2; // Equals 1.68

    printf("i1 = %d\ni2 = %d\nQuotient = %d\nRemainder = %d\n\nf1 = %f\nf2 = %f\nResult = %f\n\n", i1, i2, quotient, remainder, f1, f2, result);

    // Operator Precedence
        // Multiplication and division operators (including %) are preformed first, from left to right, and have equal precedence with each other
        // The addition and subtracion operators are preformed after multiplication/division, from left to right, and have equal precedence with each other
        // Parentheses "()" can be used to change the order, as they take the highest precedence
        // Remember PEMDAS

    int a = 6;
    int b = 4;
    int c = 2;
    int result2;

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    result2 = a - b + c; // Result: 4
    printf("Expression: a - b + c, Result: %d\n", result2);

    result2 = a + b / c; // Result: 8
    printf("Expression: a + b / c, Result: %d\n", result2);

    result2 = (a + b) / c; // Result: 5
    printf("Expression: (a + b) / c, Result: %d\n\n", result2);

    // Type conversion
        // When an arithmetic operation is preformed with 2 differing data types, the compiler will attempt to convert to the correct type
            // If this fails, the compiler will throw an error

    float price = 6.5;
    int increase = 2;
    float new_price;

    // Convert int (increase) to float in an addition problem
    new_price = price + increase; // Result: 8.5

    printf("Current Price: $%4.2f\nPrice Increase: %d\nNew price: $%4.2f\n\n", price, increase, new_price);

    // Explicit type casting
        // It's possible to force a variable into being another variable via typecasting
        // use (<data type>) to typecast

    int total = 23;
    int count = 4;
    float average;

    // Without casting, this would return 5 (because of truncated division)
    average = (float) total / count; // Result: 5.75
    printf("Total: %d, Count: %d\nAverage: %4.2f\n\n", total, count, average);

    // Assignment operators
        // An assignment statement evaluates an expression on the right and assigns it to the variable on the left
        // For example, x = 10 - 1; 10 - 1 = 9, which is assigned to x, so x = 9

    int x = 3;
    x = x + 1; // Result: 4

    // The same as "x = x + 1"
    x += 1; // Result: 5

    // Many operators have an assignment version:
        // += 1: var = var + 1
        // -= 1: var = var - 1
        // *= 2: var = var * 2
        // /= 2: var = var / 2
        // %= 2: var = var % 2 

    // Increment / Decrement operator
        // Adding 1 to a variable can be done with the increment operator ++
        // Similarly, the decrement operator -- can be used to subtract 1 from a value
        // Either operator can be used as a prefix or postfix
            // A prefixed operator (++y) evaluates the operator before an expression
            // A postfixed operator (y++) evaluates after an expression
        // Note: y-- isn't the same as y - 1, because y-- actually decrements the y variable while y - 1 doesn't change the value of y

    int y = 5;
    printf("y: %d\n", y);

    y++; // Result: 6
    printf("y: %d\n", y);

    y--; // Result: 5
    printf("y: %d\n\n", y);

    int z = 6;
    printf("z: %d\n", z);

    int z2 = z--; // Assign z2 to z (6), then decrement z
    printf("z2: %d\n", z2);
    printf("z: %d\n\n", z);

    int z3 = 7;
    printf("z3: %d\n", z3);

    int z4 = --z3; // Decrement z, then assign it to z4
    printf("z4: %d\n", z4);
    printf("z3: %d\n", z3);

    return 0;
}