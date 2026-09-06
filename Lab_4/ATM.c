#include <stdio.h>

float convertUSDToINR(float usdAmount){
    return usdAmount * 95.0;
}

int validateAmount(int inrAmount){
    if (inrAmount > 0 && inrAmount % 100 == 0) return 1;
    else return 0;
}

void dispenseNotes(int inrAmount){
    int N500, N200, N100,totalNotes;

    N500 = inrAmount / 500;
    inrAmount  %= 500;

    N200 = inrAmount / 200;
    inrAmount %= 200;

    N100 = inrAmount / 100;

    totalNotes = N500 + N200 + N100;

    printf("=== Denomination Breakdown ===\n");
    printf("Rs. 500 notes : %d\n", N500);
    printf("Rs. 200 notes : %d\n", N200);
    printf("Rs. 100 notes : %d\n", N100);
    printf("Total Notes : %d\n", totalNotes);
}

int main(){
    float usdAmount, inrValue;
    int payableAmount;

    printf("=== Airport Currency Exchange & Cash Dispenser ===\n");
    printf("Current Exchange Rate: 1 USD = Rs. 95.00\n");

    printf("Enter amount in USD: ");
    scanf("%f", &usdAmount);

    inrValue = convertUSDToINR(usdAmount);

    payableAmount = (int)inrValue;

    printf("--- Transaction Summary ---\n");
    printf("USD Amount Entered: $%.2f\n", usdAmount);
    printf("Equivalent INR Value: Rs. %.2f\n", inrValue);
    printf("Payable Amount (INR): Rs. %d\n", payableAmount);
    printf("---------------------------\n");

    if (validateAmount(payableAmount)){
        printf("Dispensing cash...\n");
        dispenseNotes(payableAmount);
    }else{
        printf("Error: Amount cannot be dispensed.\n");
        printf("The amount must be greater than 0 and a multiple of Rs. 100.\n");
    }
}
