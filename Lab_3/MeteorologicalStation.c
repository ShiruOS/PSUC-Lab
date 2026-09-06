#include <stdio.h>

int main(){
    int days, i,week, count;
    float weekSum, weekAvg, totalSum, totalAvg, highest, lowest;

    week=1;
    weekSum=0;
    totalSum=0;

    printf("Enter number of days: ");
    scanf("%d", &days);

    float record[days];

    printf("Enter the temperature (in degree-C)\n");
    for (i=0; i<days; i++) {
        printf("Day %d: ", i+1);
        scanf("%f", &record[i]);
    }

    lowest=record[0];
    highest=record[0];

    for (i=0; i<days; i++) {
        weekSum+=record[i];
        totalSum+=record[i];

        if (record[i]<lowest) lowest=record[i];
        if (record[i]>highest) highest=record[i];

        if ((i+1)%7==0) {
            weekAvg=weekSum/7;
            printf("Week %d average temperature is %.2f \n", week, weekAvg);
            weekSum=0;
            week++;
        }else if ((i+1)==days) {
            weekAvg=weekSum/(days%7);
            printf("Week %d average temperature is %.2f \n", week, weekAvg);
        }
    }

    totalAvg=totalSum/days;

     for (i=0; i<days; i++) {
         if (record[i]>totalAvg) count++;
    }

     printf("The lowest temperature is %.2f\n", lowest);
     printf("The highest temperature is %.2f\n", highest);
     printf("Days with temperature higher than average temperature are %d\n", count);
}
