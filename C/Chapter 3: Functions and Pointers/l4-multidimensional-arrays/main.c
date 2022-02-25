#include <stdio.h>

int main() {
    // An array can be defined as multi-dimensional by using several square brackets. It's like making a table or the assignment of a chess board
    int playerHP[2][10]; // This is a 2 x 10 array

    // Nested curly braces can be used to define values in the array
    int a[2][3] = {
        {3, 5, 2},
        {7, 8, 0}
    };

    // To access values in a multidimensional array, both a row and collumn are needed
    int x = 0, y = 1;
    printf("a[%d][%d] = %d\n\n", x, y, a[x][y]);

    // For loops can be used to iterate through multidimensional arrays too
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }

    return 0;
}