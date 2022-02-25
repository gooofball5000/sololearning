#include <stdio.h>
#include <string.h>

typedef struct {
        char make[20];
        int model_year;
        int id_type; //// 0 for id_num, 1 for VIN
        union {
            int id_num;
            char VIN[20];
        } id;
    } vehicle;

void displayCar(vehicle car);

int main() {
    // Unions
        // A union lets someone store different datatypes in the same memory location. It's like a structure because it has members. However, a union variable
        //  uses the same memory location for all its members and only one member at a time can occupy the memory location.
        // A union declaration uses the keyword union, a union tag, and curly braces {} with a list of members

    // Example
    union val {
        int int_num;
        float fl_num;
        char str[20];
    };

        // After declaring a union, it's possible to declare union variables. Unions can be assigned to other unions of the same type

    union val u1;
    union val u2;
    u2 = u1;

        // Unions are used for memory management. The largest member datatype is used to determine the size of the memory to share and then all members use this
        //  one location. This process also helps limit memory fragmentation

    // Accessing union members
        // Union members are accessed by using the . operator between the variable name and the member name. When assignment is preformed, the union memory location
        //  will be used that member until another member assignment is preformed
        // Trying to access a member that isn't occupying the memory location gives unexpected results

    // Example
    union val test;
    test.int_num = 123;
    test.fl_num = 98.76;
    strcpy(test.str, "hello");

    printf("%d\n", test.int_num);
    printf("%4.2f\n", test.fl_num);
    printf("%s\n\n", test.str);

        // The last assignment overrides previous assignments, which is why str stores a value and accessing int_num and fl_num is meaningless

    // Structures with unions
        // Unions are often used within structures because a structure can have a member to keep track of which union member stores a value. In the following
        //  example, a vehicle struct uses either a vehicle identification number (VIN) or an assigned id, but not both

    vehicle car1;
    strcpy(car1.make, "Ford");
    car1.model_year = 2017;
    car1.id_type = 1;
    strcpy(car1.id.VIN, "Lmao my car");
    ////car1.id_type = 0;
    ////car1.id.id_num = 123098;

        // Note: Because the union was declared inside the structure, the union name was required at the end of declaration. A union with a union tag could be
        //  declared outside the struct, but with such a specific use, the union within the struct provides easier to understand code

        // Note 2: The . operator is used twice to access union members of struct members

        // The id_type keeps track of which union member stores a value
    
    // For example, the following function makes use of this to display the data stored in car1
    displayCar(car1);

    return 0;
}

void displayCar(vehicle car) {
    printf("Make: %s\n", car.make);
    printf("Model year: %d\n", car.model_year);
    
    if(car.id_type == 0) {
        // use id_num
        printf("Id Number: %d\n", car.id.id_num);
    } else {
        // use VIM
        printf("VIN: %s\n", car.id.VIN);
    }

}