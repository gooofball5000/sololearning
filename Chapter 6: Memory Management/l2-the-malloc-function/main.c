#include <stdio.h>
#include <stdlib.h>

int main() {
    // The malloc function
        // The malloc function allocates a specified number of contiguous bytes in memory.

    // Example
    int *ptr = NULL;
    //// Allocate a block of 10 ints
    ptr = malloc(10 * sizeof(*ptr));
    if(ptr != NULL) {
        //// Assign 50 to the 3rd int
        *(ptr + 2) = 50;
    }
    printf("ptr + 2 = %d\n", *(ptr + 2));
        // malloc returns a pointer to the allocated memory
        // Notice the sizeof was applied to *ptr instead of int, making the code more robust should the *ptr declaration be changed to a different data type later

        // The allocated memory is contiguous and can be treated as an array. Instead of using brackets [] to refer to elements, pointer arithmatic is used to 
        //  traverse the array. It's advised to use + to refer to array elements. Using ++ or += changes the address stored by the pointer

        // If allocation is unsuccessful, NULL is returned. Because of this, code should be included to check for a null pointer

            // Note: a simple 2-dimensional array requires (rows * columns) * sizeof(datatype) bytes of memory

    // The free function
        // The free() function is a memory management function that is called to release memory. By freeing memory, you make more memory available for later use
        //  in your program

    // Example
    free(ptr);
    printf("After memory being freed, ptr + 2 = %d\n", *(ptr + 2));

    return 0;
}