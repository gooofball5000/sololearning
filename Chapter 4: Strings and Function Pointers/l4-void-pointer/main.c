#include <stdio.h>
#include <stdlib.h>

void * square(const void *);
int compare (const void *, const void *);

int main() {
    // A void pointer is used to refer to any address type in memory and has a declaration that looks like
            // void *ptr

        // The following example uses the same pointer for 3 different data types
    int x = 33;
    float y = 12.4;
    char c = 'a';
    void *ptr;

    ptr = &x;
    printf("void ptr points to %d\n", *((int *)ptr));
    
    ptr = &y;
    printf("void ptr points to %3.1f\n", *((float *)ptr));

    ptr = &c;
    printf("void ptr points to %c\n", *((char *)ptr));

        // Before using the pointer, it must be typecasted to the proper data-type before dereferencing with *

    // Functions using void pointers
        // Void pointers are often used for function declarations. For example: 
            // void * square(const void *);
        // Using a "void *" return type allows for any return type. Similarly, parameters that are "void *" accept any argument type. If you want to use the data
        //  passed in by the parameter without changing it, it must be declared as a const

        // The parameters can be left out to further insulate the declaration from its implementation. Declaring a function this way allows the definition to
        //  be customized as needed without having to change the declaration

        // Example

    x = 6;
    long int sq_int;

    sq_int = (long)square(&x);
    printf("%d squared is %ld\n", x, sq_int);

    // Function pointers as arguments
        // Another way to use a function pointer is to pass it as an argument to another function. A function pointer used as an argument is sometimes reffered to
        //  as a callback function because the receiving function "calls it back"

        // The qsort() function in stdlib.h uses this technique
            // Quicksort is a widely used algorithm for sorting an array. To implement the sort in your program, you need only include the stdlib.h file and then
            //  write a compare function that matches the declaration used in qsort
                // void qsort(void *base, size_t num, size_t width, int (*compare)(const void *, const void *))

            // To breakdown the qsort definition:
                // void *base : A pointer to the array
                // size_t num : the number of elements in the array
                // size_t width : the size of an element
                // int(*compare)(const void *, const void *) : A function pointer which has two arguments and returns a 0 when the arguments are the same value,
                //  less than 0 when arg1 comes before arg2, and greater than 0 when arg1 comes after arg2

            // The actual implementation of the compare function is up to you. It doesn't even need to have the name "compare". You have the opportunity to
            //  designate a sort from high to low or low to high, or if an array contains structure elements, you can compare member values

            // The following program sorts an array of ints from high to low using qsort
    
    int arr[5] = {55, 22, 33, 77, 82};
    int num, width;

    num = sizeof(arr)/sizeof(arr[0]);
    width = sizeof(arr[0]);
    qsort((void *)arr, num, width, compare);
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    // We used the function name in the qsort call because a function name acts as a pointer

    return 0;
}

void * square(const void *num) {
    float n = *(float *)num;
    float result = n * n;

    // This square function has been written to multiply ints, which is why the num void pointer is cast to an int. If the implementation were to be changed to 
    //  allow square() to multiply floats, then only the definition need be changed without having to make changes to the declaration. 
}

int compare (const void *elem1, const void *elem2) {
    if ((*(int *)elem1) == (*(int *)elem2)) {
        return 0;
    } else if ((*(int *)elem1 < (*(int *)elem2))) {
        return -1;
    } else {
        return 1;
    }
}