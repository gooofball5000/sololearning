#include <stdio.h>

int main() {
    // Memory management
        // Understanding memory is an important aspect of C programming. When a variable is declared using a basic data type, C automatically allocates space for
        //   the variable in an area of memory called the stack
        // For example, and int variable is typically allocated 4 bytes when delcared. This can be tested by using the sizeof operator
    
    int x;
    printf("%ld\n", sizeof(x));

        // An array with a specified size is allocated in contiguous blocks of memory with each block being the size of one element
    
    // Example
    int arr[10];
    printf("Size of \"int arr[10]\": %ld\n", sizeof(arr));

        // So long as the program explicitly declares a basic data type or an array size, memory is automatically managed. However, this doesn't allow for an array
        //  of undefined size. Dynamic memory allocation is the solution

        // Dynamic memory allocation is the process of allocating and freeing memory as needed. Now you can prompt at runtime for the number of array elements and then
        //  create an array with that many elements. Dynamic memory is managed with pointers that point to newly allocated blocks of memory in an area called the heap

        // In addition to automatic memory management using the stack and dynamic memory allocation using the heap, there is statically managed data in main memory
        //  for variables that persist for the lifetime of the program

    // Memory management functions
        // The stdlib.h library includes memory management functions. The statement #include <stdlib.h> at the top of a program gives access to the following:
            // malloc(BYTES) : Returns a pointer to a contiguous block of memory that is of size BYTES
            // calloc(NUM_ITEMS), ITEM_SIZE) : Returns a pointer to a contiguous block of memory that has NUM_ITEMS items, each of size ITEM_SIZE. Typically used for
            //  arrays, structs, and other derrived datatypes. The allocated memory is initalized to 0
            // realloc(PTR, BYTES) : Resizes the memory pointed to by PTR to a size of BYTES. The newly allocated memory is not initalized
            // free(PTR) : Releases the block of memory pointed to by PTR

        // These functions will be elaborated on later  

    return 0;
}
