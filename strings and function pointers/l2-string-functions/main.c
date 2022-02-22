#include <stdio.h>
#include <string.h>

int main() {
    // The sprintf and sscanf functions
        // A formatted string can be created with the sprintf() function. This is useful for building a string from other data types

    // For example
    char info[100] = {};
    char dept[] = "HR";
    int emp = 75;
    sprintf(info, "The %s dept has %d employees.", dept, emp);  // THIS IS AN EXTREMELY FUCKING USEFUL FUNCTION
    printf("%s\n", info);

    // Another useful function is sscanf() for scanning a string for values. The function reads values from a string and stores them in the corresponding varaible
    //  addresses

    // For example
    char info2[] = "Snoqualmie WA 13190";
    char city[50] = {};
    char state[50];
    int population;

    sscanf(info2, "%s %s %d", city, state, &population);
    printf("%d people live in %s, %s.\n\n", population, city, state);

    // The <string.h> library
        // The string library contains numerous string functions. The statement #include <string.h> at the top of a program gives access to the following:
            // strlen(str) : Returns the lengths of the string being stored. DOES NOT INCLUDE THE NULL CHARACTER
            // strcat(str1, str2) : Appends (concatenates) str2 to the end of str1 and returns a pointer to str1
            // strcpy(str1, str2) : Copies str2 to str1. This function is useful for assigning a new value

    // Example
    char s1[] = "The grey fox";
    char s2[] = " jummped.";

    strcat(s1, s2);
    printf("%s\n", s1);
    printf("The length of s1 is %ld\n\n", strlen(s1));
    strcpy(s1, s2);
    printf("s1 is now: %s\n", s1);
    printf("The length of s1 is now %ld\n\n", strlen(s1));

    // Aditional string.h functions include:
        // strncat(str1, str2, n) : Appends the first n characters of str2 to the end of str1 and returns a pointer to str1
        // strncpy(str1, str2, n) : Copies the first n characters of str2 to str1
        // strcmp(str1, str2) : Returns 0 when str1 is equal to str2, less than 0 when str1 < str2, and greater than 0 when str1 > str2
        // strncmp(str1, str2, n) : Returns 0 when the first n characters of str1 is equal to the first n characters of str2, less than 0 when str1 < str2, and
        //  greater than 0 when str1 > str2
        // strchr(str1, c) : Returns a pointer to the first occurence of char in str1, or NULL if the character isn't found
        // strrchr(str1, c) : Searches str1 in reverse and returns a pointer to the position of char c in str1, or NULL if the character isn't found
        // strstr(str1, str2) : returns the first occurence of str2 in str1, or NULL if str2 isn't found

    // Converting a string to a number
        // Converting a string of number characters to a numeric value is a common task in C programming and is often used to prevent a run-time error.
        //  Reading a string is less error-prone than expecting a numeric value, only to have the user accidentally type an 'o' instead of a '0'
        // The stdio.h library contains the following functions for converting a string to a number:
            // int atoi(str) : Stands for ASCII to integer. Converts str to the equivalent int value. 0 is returned if the first character is not a number or no
                // numbers are encountered
            // double atof(str) : Stands for ASCII to float. Converts str to the equivalent double value. 0.0 is returned if the first character is not a number
                // or no numbers are encountered
            // long int atol(str) : Stands for ASCII to long. Converts str to the equivalent long integer value. 0 is returned is the first character is not a 
                // number or no numbers are encountered

    // Atoi example

    char input[10];
    int num;

    printf("Enter a number:\n");
    fgets(input, 10, stdin);
    num = atoi(input);
    printf("%d\n\n", num);

    // Array of strings
        // A two dimensional array can be used to store related strings. Consider the following

    char tripArr[3][15] = {
        "Suitcase",
        "Passport",
        "Ticket"
    };

    // Thinking of trip[0] as "suitcase" is error prone. Think about each individual set of characters and their locations
    // A better way to deal with an array of string is through an array of pointers

    char *trip[] = {
        "Suitcase",
        "Passport",
        "Ticket"
    };
    
    printf("Please bring the following:\n");
    for(int i = 0; i < 3; i++) {
        printf("%s\n", trip[i]);
    }

    // This method has a more ragged structure, letting each string be as long as is needed. More importantly, items can be referred to by a pointer to the first
    //  character of each string

    return 0;
}