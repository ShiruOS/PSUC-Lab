#include <stdio.h>

int main(){
    float dist, eff, cpl, fuel, cost;
    printf("Enter distance in kilometers: ");
    scanf("%f", &dist);
    printf("Enter efficency: ");
    scanf("%f", &eff);
    printf("Cost of fuel per liter: ");
    scanf("%f", &cpl);

    fuel= dist/eff;
    cost= fuel * cpl;

    printf("Total fuel needed is %.2f \n",fuel);
    printf("Total cost is %.2f \n",cost);
}
