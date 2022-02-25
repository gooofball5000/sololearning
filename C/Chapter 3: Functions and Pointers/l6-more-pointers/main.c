#include <stdio.h>

void swap(int *num1, int *num2);

int main() {
    // Pointers and arrays
        // Pointers are super useful with arrays. An array declaration reserves a block of contiguous memory addresses for its elements. With pointers, we can point 
        //  to the first element and then use address arithmetic to traverse the array
            // + is used to move forward to a memory location
            // - is used to move backward to a memory location

    // Example:
    int a[5] = {22, 33, 44, 55, 66};
    int *ptr = NULL;
    int i;

    ptr = a;
    for(i = 0; i < 5; i++) {
        printf("%d\n", *(ptr + i));
    }

    // Note: 
        // An important concept with arrays is that an array name acts as a pointer to the first element of the array
            // The statement "ptr = a;" can be thought of as "ptr = &a[0];"

    // More address arithmetic
        // Address arithmetic can be thought as pointer arithmetic because the operations involve pointers
        // Besides using + and - to refer to the next and previous memory locations, the assignment operators can be used to change the address the pointer contains

    // Example:
    ptr = NULL;
    ptr = a;
    printf("%d %x\n", *ptr, ptr);
    ptr++;
    printf("%d %x\n", *ptr, ptr);
    ptr += 3;
    printf("%d %x\n", *ptr, ptr);
    ptr--;
    printf("%d %x\n", *ptr, ptr);
    ptr -= 2;
    printf("%d %x\n\n", *ptr, ptr);

    // When a pointer is incremented, the memory address increases by the number of bytes being pointed to. In the above code, the pointer increases by 4 when
    //  an increment operator is used (ptr++) because the pointer is pointing to an int

    // Pointers and functions
        // Pointers greatly expand the possibilities for functions. Now you can "return" more than 1 value. With pointer parameters, it's possible for functions
        //  to alter actual data rather than a copy
        // To change the actual values of variables, the calling statement passes addresses to pointer parameters in a function. 

    // The following example code swaps 2 values
    int x = 25, y = 100;
    printf("x is %d, y is %d\n", x, y);
    swap(&x, &y);
    printf("x is %d, y is %d\n\n", x, y);

    return 0;
}

void swap(int *num1, int *num2) {
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return;
}