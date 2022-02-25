#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Allocating memory for strings
        // When allocating memory for a string pointer, it may be desireable to use string length rather than the sizeof operator for calculating bytes

    // Example
    char str20[20];
    char *str = NULL;
    
    strcpy(str20, "12345");
    str = malloc(strlen(str20) + 1);
    strcpy(str, str20);
    printf("%s\n", str);
    printf("Size of str: %ld\n", sizeof(str));

        // This approach is better memory management becuase there isn't extra memory allocated to the pointer. When using strlen() to determine the number of
        //  bytes needed for a string, be sure to include one extra byte for the null character \0

        // A char is always one byte, so there is no need to multiply the memory requirements by sizeof(char)

    // Dynamic arrays
        // Many algorithms implement a dynamic array because this allows for the number of elements to grow as needed. Because elements are not allocated all at
        //  once, dynamic arrays typically use a structure to keep track of the current array size, current capacity, and a pointer to elements

    // Example
    typedef struct {
        int *elements;
        int size;
        int cap;

    } dyn_arr;

    dyn_arr arr;

    //// Initalize the array
    arr.size = 0;
    arr.elements = calloc(1, sizeof(*arr.elements));
    arr.cap = 1; //// Room for 1 element

    //// To expand by more elements
    arr.elements = realloc(arr.elements, (5 + arr.cap) * sizeof(*arr.elements));
    if(arr.elements != NULL) {
        arr.cap += 5; //// Increase capacity
    }

    //// Adding an element to the array increases its size
    if(arr.size < arr.cap) {
        arr.elements[arr.size] = 50;
        arr.size++;
    } else {
        printf("You need to expand the array\n");
    }

        // The entire program is within main() for demonstration purposes. To properly implement a dynamic array, sub-tasks should be broken down into functions
        //  such as init_array(), increase_array(), add_element(), and display_array(). Error checking was also skipped to keep the demo short

    return 0;
}