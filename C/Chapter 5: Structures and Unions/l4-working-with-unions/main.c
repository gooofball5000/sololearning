#include <stdio.h>

union id {
    int id_num;
    char name[20];
};

void set_id(union id *item, int num);
void show_id(union id item);

int main() {
    // Pointers to unions
        // A pointer to a union points to the memory location allocated to the union. A union pointer is declared by using the keyword union and the union tag
        //  along with * and the pointer name

    // Example
    typedef union {
        int int_num;
        int fl_num;
        char str[20];
    } val;

    val info;
    val *ptr = NULL;
    ptr = &info;
    ptr->int_num = 10;
    printf("info.int_num is %d\n\n", info.int_num);

        // -> is required to access union members through a pointer.
            // (*ptr).int_num is the same as ptr->int_num, so they're technically interchangable. However, -> is more readable and easier to type, so use ->

    // Unions as function parameters
        // A function can have union parameters that accept arguments by value when a copy of the union variable is all that is needed. For a function to change
        //  the actual value in the union memory location, pointer parameters are required

    // Example
    union id testId;
    set_id(&testId, 12);
    show_id(testId);

    // Array of unions
        // An array can store elements of any datatyoe, including unions. With unions, it's important to keep in mind that only one member of the union can store
        //  data for each array element
        // After declaring an array of unions, an element is accessible with the index number. The . operator is then used to access members of the function

    // Example
    val nums[10];

    for(int i = 0; i < 10; i++) {
        nums[i].int_num = i;
    }

    for(int i = 0; i < 10; i++) {
        printf("%d ", nums[i].int_num);
    }
    printf("\n");

        // An array is a data structure that stores a collection of values that are all the same datatype. Arrays of unions allow for storage of variables with
        //  different types
    
    // Example
    union type {
        int i_val;
        float f_val;
        char ch_val;
    };

    union type arr[3];

    arr[0].i_val = 42;
    arr[1].f_val = 3.14;
    arr[2].ch_val = 'x';

    return 0;
}

void set_id(union id *item, int num) {
    item->id_num = num;
}

void show_id(union id item) {
    printf("ID is: %d\n\n", item.id_num);
}