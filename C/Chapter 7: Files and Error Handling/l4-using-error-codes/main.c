#include <stdio.h>
#include <stdlib.h>

#include <errno.h>
#include <string.h>

#include <math.h>

int main() {
    // Using error codes
        // Some library functions, such as fopen(), set an exit code when they do not execute as expected. The error code is set in a global variable named errno
        //  which is defined in the errno.h library. When using errno, it should be set to 0 before calling a library function

        // To output the error code stored in errno, fprintf to stderr should be used. Using stderr is a matter of convention and is good programming practice

        // You can output errno through other means, but it will be easier to keep track of your exception handling if you only use stderr for error messages

        // To use errno, you need to declare it with the statement "extern int errno;" at the top of your program. (or include the errno.h header)

    // For example
    FILE *fptr;

    /*
    errno = 0;
    fptr = fopen("non-existent_file.txt", "r");
    if(fptr == NULL) {
        fprintf(stderr, "Error opening file. Error code: %d\n", errno);
        exit(EXIT_FAILURE);
    }

    fclose(fptr);
    */

    // The perror and strerror Functions
        // When a library function sets errno, a cryptic error number is assigned. For a more descriptive message about the error, perror() can be used.
        //  strerror() from the string.h library can also be used; strerror returns a pointer to the message's text

        // perror() must include a string that will precede the actual error message. Typically, there is no need for both perror and strerror for the same error,
        //  however the following example uses both for demonstration purposes

    // Example

    /*
    errno = 0;
    fptr = fopen("non-existent_file.txt", "r");
    if(fptr == NULL) {
        perror("ERROR");
        fprintf(stderr, "%s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    fclose(fptr);
    */

        // There are more than 100 error codes, this lists them

    // Example
    for(int i = 0; i < 136; i++) {
        fprintf(stderr, "%d: %s\n", i, strerror(i));
    }
    printf("\n");
    
    // EDOM and ERANGE Error Codes
        // Some of the mathematical functions in the math.h library set errno to the defined macro value EDOM when a domain is out of range. Similarly, the
        //  ERANGE macro value is used when there is a range error

    // Example

    /*
    float k = -5.0;
    float num = 1000;
    float result;

    errno = 0;
    result = sqrt(k);
    if(errno == 0) {
        printf("Result: %f", result);
    } else if(errno == EDOM) {
        fprintf(stderr, "%s\n", strerror(errno));
    }

    errno = 0;
    result = exp(num);
    if(errno == 0) {
        printf("Result: %f", result);
    } else if(errno == ERANGE) {
        fprintf(stderr, "%s\n", strerror(errno));
    }
    */

    //// My compiler is stupid and can't find math.h for some reason. Unidentified references to sqrt() and exp()

    // The feof and ferror functions
        // In addition to checking for null file pointers and using errno, the feof() and ferror() functions can be used for determining file I/O errors
            // feof(FP) : Returns a non-zero value if the end of the stream has been reached, 0 otherwise. feof also sets EOF
            // ferror(FP) : Returns a non-zero value if there is an error, 0 if there is no error

    // Example
    int c;
    
    errno = 0;
    fptr = fopen("myfile.txt", "r");
    if(fptr == NULL) {
        fprintf(stderr, "%s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    while((c = getc(fptr)) != EOF) {
        printf("%c", c);
    }

    if(ferror(fptr)) {
        fprintf(stderr, "I/O error reading file");
        exit(EXIT_FAILURE);
    }

    if(feof(fptr)) {
        printf("End of file reached\n");
    }

    return 0;
}