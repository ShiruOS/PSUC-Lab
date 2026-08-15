#include <stdio.h>

int main(){
    float base, da, hra, pf, gross, payable;

    printf("Enter the basic salary of your employee: ");
    scanf("%f", &base);

    da=base* .4;
    hra=base* .2;
    pf=base* .1;

    gross= base+da+hra;
    payable=gross-pf;

    printf("Total salary is %.2f \n", gross);
    printf("Payable salary is %.2f \n", payable);
}
