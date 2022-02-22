#include <stdio.h>

int main() {
    // If statements can be layered in each other, making a nested if statement

    int profit = 1731;
    int clients = 17;
    int bonus = 0;

    if(profit >= 1000) {
        if(clients >= 15) {
            bonus = 200;
        }
    } else {
        bonus = 25;
    }

    printf("Profit: %d\nClients: %d\nBonus: %d\n\n", profit, clients, bonus);

    // If-else-if statements can be used to try a whole bunch of outputs

    int score = 89;

    if(score >= 90) {
        printf("Top 10%%\n");
    } else if (score >= 80) {
        printf("Top 20%%\n");
    } else if (score >= 70) {
        printf("You passed\n");
    } else {
        printf("You did not pass.\n\n");
    }

    return 0;
}