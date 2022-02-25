#include <stdio.h>
#include <string.h>

// Example struct
struct course {
    int id;
    char title[40];
    float hours;

    // This struct statement defines a new data type named "course" that has three members

};

int main() {
    // Structures
        // A structure is a user-defined data type that groups related variables of different data types. A structure definition includes the keyword "struct",
        //  a structure tag for referencing the structure, and curly braces {} with a list of variable declarations called members
        // Structure members can be of any datatype, including basic types, strings, arrays, pointers, and even other structures

    // Declarations using structures
        // To declare variables of a structure data type, you must the the struct keyword, followed by the struct tag, and the variable name. For example, the
        //  statements below delcare a structure data type and then uses the student struct to declare variables s1 and s2

    struct student {
    int age;
    int grade;
    char name[40];
    };

    struct student s1;
    struct student s2;

    // Declarations using structures (cont.)
        // A struct can also be initalized in the declaration by listing initial values in order inside curly braces

    struct student s3 = {16, 10, "Jack"};
    struct student s4 = {18, 12, "Michael"};

        // If you wanted to initalize a structure using curly braces after declaration, the definition needs to be type-casted

    struct student s5;
    s5 = (struct student) {10, 5, "Lilly"};

        // It's also possible to use named member initalization when initalizing a structure to initalize corresponding members

    struct student s6 = {.grade = 11, .age = 17, .name = "Bella"};

    // Accessing structure members
        // Accessing the members of a struct is done by using the . operator between the variable name and the member name. For example, to assign a value to age
        // member of the si struct variable, use a statement like

    s1.age = 19;

        // A structure can also be assigned to another struct of the same type

    s2 = s1;

        // The following code demonstrates using a structure

    struct course cs1 = {341279, "Into to C++", 12.5};
    struct course cs2;

    //// Initalize cs2
    cs2.id = 341281;
    strcpy(cs2.title, "Advanced C++");
    cs2.hours = 14.25;

    //// Display course info
    printf("%d\t%s\t%4.2f\n", cs1.id, cs1.title, cs1.hours);
    printf("%d\t%s\t%4.2f\n\n", cs2.id, cs2.title, cs2.hours);

        // Note: String assignment requires strcpy() from the string.h library

    // Using typedef
        // The typedef keyword create a type definition that simplifies code and makes a program easier to read. Typedef is commonly used with structures because
        //  it eliminates the need to use the keyword struct when declaring variables

        // Example
    
    typedef struct {
        char str[50];
        int num;
    } example;

    example typedefExample = {"This is an example of using typedef & structs", 1};
    printf("%s\n", typedefExample.str);

        // Note: A structure tag is no longer used, instead a typedef name appears before the struct declaration. Now that the word struct is no longer required
        //  in variable declarations, the code is cleaner and easier to read

    return 0;
}