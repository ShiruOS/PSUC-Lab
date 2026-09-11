#include <stdio.h>

float calculateBMR(float weight, float height, int age, char gender){
    float bmr = (10 * weight) + (6.25 * height) - (5 * age);

    if (gender == 'M' || gender == 'm') bmr += 5;
    else if (gender == 'F' || gender == 'f') bmr -= 161;

    return bmr;
}

float calculateCaloriesBurned(int steps, int activeMinutes){
    return (steps * 0.04) + (activeMinutes * 7.5);
}

void displayEnergySummary(float totalIntake, float totalExpenditure){
    float netEnergy = totalIntake - totalExpenditure;

    printf("=== Energy Summary Report ===\n");
    printf("Total Daily Expenditure: %.2f kcal\n", totalExpenditure);
    printf("Total Caloric Intake: %.2f kcal\n", totalIntake);
    printf("-----------------------------\n");
    printf("Net Energy Balance: %.2f kcal\n", netEnergy);

    if (netEnergy > 0)  printf("Status: Caloric Surplus (+%.2f kcal)\n", netEnergy);
    else if (netEnergy < 0) printf("Status: Caloric Deficit (%.2f kcal)\n", netEnergy);
    else    printf("Status: Maintenance (0.00 kcal)\n");
}

int main(){
    float weight, height, totalIntake, bmr, activeCalories, totalExpenditure;
    int age, steps, activeMinutes;
    char gender;

    printf("=== Daily Energy Balance Tracker ===\n");

    printf("Enter weight (in kg): ");
    scanf("%f", &weight);

    printf("Enter height (in cm): ");
    scanf("%f", &height);

    printf("Enter age (in years): ");
    scanf("%d", &age);

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    printf("--- Activity & Nutrition ---\n");

    printf("Enter daily step count: ");
    scanf("%d", &steps);

    printf("Enter active workout duration (in minutes): ");
    scanf("%d", &activeMinutes);

    printf("Enter total caloric food intake (kcal): ");
    scanf("%f", &totalIntake);

    bmr = calculateBMR(weight, height, age, gender);
    activeCalories = calculateCaloriesBurned(steps, activeMinutes);

    totalExpenditure = bmr + activeCalories;

    printf("=== Energy Summary Report ===\n");
    printf("Basal Metabolic Rate (BMR): %.2f kcal\n", bmr);
    printf("Active Calories Burned: %.2f kcal\n", activeCalories);
    printf("Total Daily Expenditure: %.2f kcal\n", totalExpenditure);
    printf("Total Caloric Intake: %.2f kcal\n", totalIntake);
    printf("-----------------------------\n");

    displayEnergySummary(totalIntake, totalExpenditure);
}
