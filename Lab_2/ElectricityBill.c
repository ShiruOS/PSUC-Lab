#include <stdio.h>

int main(){
    int units;
    float total;
    printf("Enter the total units consumed: ");
    scanf("%d", &units);

    while(units>0){
        if (units > 300) {
            total+=9.5;
        }else if(units > 200){
            total+=7.2;
        }else if (units > 100) {
            total+=5;
        }else {
            total+=3.5;
        }
        units--;
    }
    printf("Total units consumed is %.2f",total);
}
