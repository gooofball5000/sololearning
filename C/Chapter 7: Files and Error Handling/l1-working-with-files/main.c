#include <stdio.h>

int main() {
    // Accessing files
        // An external file can be opened, read from, and written to in a C program. For these operations, C includes the FILE type for defining a file stream. The
        //  file stream keeps track of where reading and writing last occured

        // The stdio.h library includes file handling functions:
            // FILE typedef for defining a file pointer
            // fopen(FILENAME, MODE) : Returns a FILE pointer to file FILENAME which is opened using MODE. If a file can't be opened, null is returned
                // Mode options are:
                    // r : open for reading (file must exist)
                    // w : open for writing (file need not exist)
                    // a : open for append (file need not exist)
                    // r+ : open for reading and writing from the beginning
                    // w+ : open for reading and writing, overriding the file
                    // a+ : open for reading and writing, appending to the file

            // fclose(FP) : Closes file opened with FILE FP, returning 0 if close was successful. EOF (end of file) is returned if there's an error in closing

    // For example
    FILE *fptr;
    fptr = fopen("myfile.txt", "w+");
    if(fptr == NULL) {
        printf("Error opening file");
        return -1;
    }
    fclose(fptr);

        // When a string literal is used to specify a filename, the escape sequence \\ indicates a single backslash. If there is an error in opening the file, -1
        //  is returned. Error handling will be explained later

    // Reading from a file
        // The stdio.h library includes functions for reading from an open file. A file can be read one character at a time, or an entire string can be read into
        //  a character buffer, which is typically a char array used for temporary storage
            // Functions
                // fgetc(FP) : Returns the next char from the file pointed to by FP. If the end of the file has been reached, EOF is returned
                // fgets(BUFF, N, FP) : Reads N-1 characters from the file pointed to by FP and stores the string in a BUFF. A null character \0 is appended as
                //  the last character in BUFF. If fgets encounters a newline character or EOF before N-1 characters is reached, then only the characters up to
                //  that point are stored in BUFF
                // fscan(FP, CONVERSION_SPECIFIERS, VARS) : Reads characters from the file pointed to by FP and assigns input to a list of variable pointers VARS
                //  using CONVERSION_SPECIFIERS. As with scanf, fscanf stops reading a string when a space or newline is encountered

    // For example, the following code demonstrates reading from a file
    /*
    FILE *fptr2;
    int c, stock;
    char buffer[200], item[10];
    float price;

    //// stock.txt: Inventory\n100 Widget 0.29\nEOF

    fptr2 = fopen("stock.txt", "r");
    fgets(buffer, 20, fptr2); //// Read a line
    printf("%s\n", buffer);

    fscanf(fptr2, "%d%s%f", &stock, item, price);

    while((c = getc(fptr2)) != EOF) { //// Read the rest of the file
        printf("%c", c);
    }

    fclose(fptr2);

    */

    // Writing to a file
        // The stdio.h library also includes functions for writing to a file. When writing to a file, newline characters '\n' must be explicitly added
            // Functions
                // fputc(CHAR, FP) : Writes character CHAR to the file pointed to by FP
                // fputs(STR, FP) : Writes string STR to the file pointed to by FP
                // fprintf(FP, STR, VALS) : Prints string STR to the file pointed to by FP. STR can optionally include format specifiers and a list of variable vars
    
    // For example, the following code demonstrates writing to a file
    FILE *fptr3;
    char filename[50];
    printf("Enter filename of the file to create: ");
    gets(filename);
    fptr3 = fopen(filename, "w");

    //// Write to file
    fprintf(fptr3, "Inventory\n");
    fprintf(fptr3, "%d %s %3.2f\n", 100, "Widget", 0.29);
    fputs("End of list", fptr3);

    return 0;
}