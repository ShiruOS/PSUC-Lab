#include <stdio.h>

int main(){
    int pin, input, attempts;
    pin = 1233;
    attempts=3;

    while (attempts>0) {
        attempts--;

        printf("Enter the 4-digit pin:");
        scanf("%d", &input);

        if (pin==input) {
            printf("Access Granted!");
            return 0;
        }else {
            printf("Incorrect Input, %d attempts remaining \n", attempts);
        }
    }
    printf("Account locked due to multiple failed attempts \n");
}
