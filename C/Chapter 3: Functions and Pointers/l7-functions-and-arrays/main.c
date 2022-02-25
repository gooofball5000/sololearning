#include <stdio.h>

int add_up(int *a, int num_elements);
int* get_evens();

int main() {
    // Functions with array parameters
        // Arrays can't be passed by value to a function. However, an array name is a pointer, so just passing an array name to a function is passing a pointer to
        //  the array

    // Example 1
    int orders[5] = {100, 220, 37, 16, 98};
    printf("Total number of orders: %d\n\n", add_up(orders, 5));

    // Just as a pointer to an array can be passed into a function, a pointer array can be returned

    // Example 2
    int *a = NULL;
    a = get_evens();

    for(int k = 0; k < 5; k++) {
        printf("%d\n", a[k]);
    }

    return 0;
}

// Used in the first example
int add_up(int *a, int num_elements) {
    int total = 0;

    for(int k = 0; k < num_elements; k++) {
        total += *(a + k); // Identical to: total += a[k];
    }

    return total;
}

int* get_evens() {
    static int nums[5] = {};
    int even = 0;

    for(int k = 0; k < 5; k++) {
        nums[k] = even += 2;
    }

    return nums;
}