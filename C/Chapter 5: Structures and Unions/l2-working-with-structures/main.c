#include <stdio.h>
#include <string.h>

typedef struct {
        char name[50];
        int number;
        int age;

    } student;

void showStudentData(student *st);

typedef struct {
    int id;
    char title[40];
    float hours;

} course;

void updateCourse(course *class);
void displayCourse(course class);

int main() {
    // Structures with structures
        // The members of a structure may also be structures

    // For example: 
    typedef struct {
        int x;
        int y;

    } point;

    typedef struct {
        float radius;
        point center;

    } circle;

        // Nested curly braces are used to initalize members that are structs. The dot operator is used twice to access members of members
    // Example
    circle c = {4.5, {1, 3}};
    printf("Radius: %3.1f, Center Coordinates: (%d, %d)\n", c.radius, c.center.x, c.center.y);

    // Pointers to structures
        // Just like pointers to variables, pointers to structures can also be defined
            // struct myStruct *struct_ptr;
                // Defines a pointer to the myStruct structure
            // struct_ptr = &struct_var;
                // Stores the address of struct_var in the pointer struct_ptr
            // struct_ptr->struct_mem;
                // Accesses the value of the structure member struct_mem

    // For example
    student st1 = {"Mathew", 5, 19};   
    showStudentData(&st1);

    // Structures as function parametersvoid updateCourse(course *class) 
        // A function can have structure parameters that accept arguments by value when a copy of the structure variable is all that is needed. For a function
        //  to change the actual values in a struct variable, pointer parameters are required

    // For example
    course cs2;
    updateCourse(&cs2);
    displayCourse(cs2);
    printf("\n");

        // As shown, updateCourse() takes a pointer as the parameter, while displayCourse() takes the structure by value

    // Array of structures
        // An array can store elements of any type, including structures. After declaring an array of structures, an element is accessible with the index number.
        //  The dot operator is then used to access members of the element

    // For example
    typedef struct {
        int h;
        int w;
        int l;

    } box;

    box boxes[3] = {{2, 6, 8}, {4, 6, 6}, {2, 6, 9}};
    int volume;

    for(int i = 0; i < 3; i++) {
        volume = boxes[i].h * boxes[i].w * boxes[i].l;
        printf("Box volume: %d\n", volume);
    }

        // Arrays of structures are used for data structures such as linked lists, binary trees, and more

    return 0;
}

void showStudentData(student *st) {
    printf("\nStudent:\n");
    printf("Name: %s\n", st->name);
    printf("Number: %d\n", st->number);
    printf("Age: %d\n\n", st->age);

    // Note: (*st).age is the same as st->age
}

void updateCourse(course *class) {
    strcpy(class->title, "C++ Fundamentals");
    class->id = 111;
    class->hours = 12.30;
}

void displayCourse(course class) {
    printf("%d\t%s\t%3.2f\n", class.id, class.title, class.hours);
}