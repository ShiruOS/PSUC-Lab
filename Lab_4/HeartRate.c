#include <stdio.h>
const int SIZE= 8;

float calculateAverageHeartRate(int rates[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++) sum += rates[i];
    return (float)sum / size;
}

int countBradycardiaEvents(int rates[], int size){
    int count = 0;
    for (int i = 0; i < size; i++)
        if (rates[i] < 60) count++;
    return count;
}

int countTachycardiaEvents(int rates[], int size){
    int count = 0;
    for (int i = 0; i < size; i++)
        if (rates[i] > 100) count++;
    return count;
}

void displayExtremeVitals(int rates[], int size){
    int max = rates[0];
    int min = rates[0];
    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < size; i++){
        if (rates[i] > max){
            max = rates[i];
            maxIndex = i;
        }

        if (rates[i] < min){
            min = rates[i];
            minIndex = i;
        }
    }

    printf("Peak Heart Rate : %d bpm (Logged at Hour %02d:00)\n",max, maxIndex * 3);
    printf("Lowest Heart Rate : %d bpm (Logged at Hour %02d:00)\n",min, minIndex * 3);
}

int main(){
    int rates[SIZE];
    int bradycardia, tachycardia, totalAbnormal;
    float average;

    printf("=== ICU 24-Hour Heart Rate Monitoring System ===\n");
    printf("Enter 8 pulse readings taken at 3-hour intervals:\n");

    for (int i = 0; i < SIZE; i++){
        printf("Hour %02d: ", i * 3);
        scanf("%d", &rates[i]);
    }

    average = calculateAverageHeartRate(rates, SIZE);
    bradycardia = countBradycardiaEvents(rates, SIZE);
    tachycardia = countTachycardiaEvents(rates, SIZE);

    totalAbnormal = bradycardia + tachycardia;

    printf("\n=== Patient Vitals Analysis Report ===\n");
    printf("24-Hour Average Heart Rate : %.2f bpm\n", average);
    printf("Bradycardia Episodes (<60) : %d\n", bradycardia);
    printf("Tachycardia Episodes (>100): %d\n", tachycardia);
    printf("Total Abnormal Readings : %d\n", totalAbnormal);

    printf("--------------------------------------\n");
    displayExtremeVitals(rates, SIZE);
    printf("--------------------------------------\n");
    printf("Overall Clinical Status : ");

    if (totalAbnormal >= 3) printf("Critical Alert: Immediate Medical Review Needed\n");
    else printf("Vitals Stable\n");
}
