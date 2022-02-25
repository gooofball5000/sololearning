#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // The calloc function
        // The calloc() function allocates memory based on the size of a specific item, such as a struct

    // For example, this uses calloc to allocate memory for a struct and malloc to allocate memory for the string within
    typedef struct {
        int num;
        char *info;

    } record;

    record *recs;
    int num_recs = 2;
    char str[] = "This is information";
    
    recs = calloc(num_recs, sizeof(record));

    if(recs != NULL) {
        for(int i = 0; i < num_recs; i++) {
            (recs + i)->num = i;
            (recs + i)->info = malloc(sizeof(str));
            strcpy((recs + i)->info, str);
        }
    }

    printf("Info in (recs + 0): %d, %s\n", (recs + 0)->num, (recs + 0)->info);
    printf("Info in (recs + 1): %d, %s\n", (recs + 1)->num, (recs + 1)->info);

        // calloc allocates blocks of memory within a contiguous block of memory for an array of structure elements. You can navigate from one structure to the next
        //  using pointer arithmetic

        // After allocating room for a structure, memory must be allocated for the string within the structure. Using a pointer for the info member allows for a
        //  string of any length to be stored

        // Dynamically allocated structures are the basis of linked lists, binary trees, and other data structures

    // The realloc function
        // The realloc() function expands a current block to include additional memory

    // Example
    int *ptr = NULL;
    ptr = malloc(10 * sizeof(*ptr));
    if(ptr != NULL) {
        *(ptr + 2) = 50;
    }
    ptr = realloc(ptr, 100 * sizeof(*ptr));
    *(ptr + 30) = 75;

        // realloc leaves the original content in memory and expands the block to allow for more storage

    return 0;
}