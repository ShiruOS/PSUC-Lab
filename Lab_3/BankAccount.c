#include <stdio.h>

int main() {
    float transactions[8];
    float totalDeposited = 0;
    float totalWithdrawn = 0;
    float balance = 0;

    printf("Enter 8 transactions (+ for deposit, - for withdrawal)\n");

    for (int i = 0; i < 8; i++) {
        printf("Transaction %d: ", i + 1);
        scanf("%f", &transactions[i]);

        if (transactions[i] > 0) totalDeposited += transactions[i];
        else totalWithdrawn += -transactions[i];

        balance += transactions[i];
    }

    printf("\nTotal amount deposited: %.2f\n", totalDeposited);
    printf("Total amount withdrawn: %.2f\n", totalWithdrawn);
    printf("Final net account balance: %.2f\n", balance);
}
