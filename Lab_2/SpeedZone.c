#include <stdio.h>

int main(){
    int speed, limit, diff;
    printf("Enter vehicle's current speed: ");
    scanf("%d",&speed);
    printf("Enter the speed limit: ");
    scanf("%d",&limit);

    diff=speed-limit;

    if (diff > 30){
        printf("License suspended! Penalty: Rs. 500");
    }else if (diff >=16){
        printf("Fine issued. Penalty: Rs. 200.");
    }else if (diff>=1) {
        printf("Warning issued. Penalty: Rs. 50.");
    }else {
    printf("Within safe limit.");
    }
}
