#include <stdio.h>
#include <string.h>

int main() {
    // Binary File I/O
        // Writing only characters to a file can become tedious when using an array or struct. To write entire blocks of memory to a file, there are the following
        //  binary functions
            // Binary options for the fopen function
                // rb : open for reading (file must exist)
                // wb : open for writing (file need not exist)
                // ap : open for appending (file need not exist)
                // rb+ : open for reading and writing from the beginning
                // wb+ : open for reading and writing, overwriting the file
                // ab+ : open for reading and writing, appending to the file

            // fwrite(PTR, ITEM_SIZE, NUM_ITEMS, FP) : Writes NUM_ITEMS of ITEM_SIZE size from pointer PTR to the file pointed to by FP
            // fread(PTR, ITEM_SIZE, NUM_ITEMS, FP) : Reads NUM_ITEMS of ITEM_SIZE size from the file pointed to by FP into PTR
            // fclose(FP) : Closes file opened with FP, returning 0 if the close was successful. EOF is returned if there was an error in closing

    // For example
    FILE *fptr;
    int arr[10];
    int x[10];

    //// Generate an array of numbers
    for(int i = 0; i < 10; i++) {
        arr[i] = i;
    }

    //// Write array to file
    fptr = fopen("datafile.bin", "wb");
    fwrite(arr, sizeof(arr), sizeof(arr)/sizeof(arr[0]), fptr);
    fclose(fptr);

    //// Read from file
    fptr = fopen("datafile.bin", "rb");
    fread(x, sizeof(arr[0]), sizeof(arr)/sizeof(arr[0]), fptr);
    fclose(fptr);

    //// Print array
    for(int i = 0; i < 10; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

            // This program wrote an array of ints to a file, but an array of structs could have been written just as easily. Notice that the item size and number
            //  of elements were determined by using the size of an element and the size of the entire variable

            // File extensions alone do not determine the format of the data in a file, but they are useful for indicating the type of data to expect. For example,
            //  a .txt extension indicates text, .bin for binary data, .csv indicates comma seperated values, and .dat is a data file

    // Controlling the file pointer
        // There are functions in stdio.h for controlling the location of the file pointer in a binary file
            // ftell(FP) : Returns a long int value corresponding to the FP file pointer position in number of bytes from the start of the file
            // fseek(FP, NUM_ByTES, FROM_POS) : Moves the FP file pointer position by NUM_BYTES bytes relative to the position FROM_POS, which can be one of the
            //  following constants:
                // SEEK_SET - start of file
                // SEEK_CUR - current position
                // SEEK_END - end of file
            
    // For example, the following code reads a record from a file of structures

    typedef struct {
        int id;
        char name[20];

    } item;

    FILE *fptr2;
    item first, second, secondf;

    //// Create records
    first.id = 10276;
    strcpy(first.name, "Widget");

    second.id = 11786;
    strcpy(second.name, "Gadget");

    //// Write records to file
    fptr2 = fopen("info.dat", "wb");
    fwrite(&first, 1, sizeof(first), fptr2);
    fwrite(&second, 1, sizeof(second), fptr2);
    fclose(fptr2);

    //// File contains 2 records of type item
    fptr2 = fopen("info.dat", "rb");

    //// Seek second record
    fseek(fptr2, 1 * sizeof(item), SEEK_SET);
    fread(&secondf, 1, sizeof(item), fptr2);
    printf("%d %s\n", secondf.id, secondf.name);
    fclose(fptr2);

        // This program wrote two item records to a file. To read just the second record, fseek() moved the file pointer to 1*sizeof(item) bytes from the start
        //  of the file. For example, if you wanted to move the pointer to the fourth record, from the start of the file, then you seek to 3*sizeof(item) from
        //  the beginning of the file (SEEK_SET)

    return 0;
}