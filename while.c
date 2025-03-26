#include <stdio.h>

int main() {
    int price = 50, amount = 0, coin;

    printf("Welcome to the Vending Machine!\n");
    printf("Item Price: %d cents\n", price);

    while (amount < price) {
        printf("Insert coin (5, 10, 25, 50, 100 cents, 0 to cancel): ");
        scanf("%d", &coin);

     
        if (coin == 0) {
            printf("Transaction canceled. Returning %d cents.\n", amount);
            return 0;
        }

        
        if (coin != 5 && coin != 10 && coin != 25 && coin != 50 && coin != 100) {
            printf("Invalid coin. Try again.\n");
            continue;
        }

       
