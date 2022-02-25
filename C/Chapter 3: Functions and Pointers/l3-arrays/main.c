#include <stdio.h>

int main() {
    // An array is a data structure that stores a collection of related values that are all the same type
    // Arrays can be extremely useful when dealing with a lot of similar values, becuase it removes the need for a million variable definitions

    // Example
    int test_scores[25]; // An integer array with a size of 25 entries

    // Arrays can aslo be initialized on definition
    float prices[5] = {3.2, 6.55, 10.49, 1.25, 0.99};

    // Arrays can also be partially initialized. All non-explicitly stated values are set to 0

    // Array indexes start at 0, so to access the value 3.2 in the prices array, use prices[0]
    for(int i = 0; i < 5; i++) {
        printf("Price %d: %4.2f\n", i + 1, prices[i]);
    }

    return 0;
}