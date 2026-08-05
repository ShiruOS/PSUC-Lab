#include <stdio.h>

int main(){

    float bill, tax, tip, total, share;

    printf("Enter the base bill amount: ");
    scanf("%f", &bill);

    tax = bill*.18;
    tip = bill * .1;

    total = bill+tax+tip;
    share= total/4;

    printf("Total bill to be payed is %.2f \n", total);
    printf("Each person has to pay %.2f \n", share);

}
