#include <stdio.h>
void analyzeShipment(float weights[], int n,float *minW, float *maxW,float *avgW, int *defectiveCount)
{
    float sum = 0.0;

    *minW = weights[0];
    *maxW = weights[0];

    *defectiveCount = 0;

    for (int i = 0; i < n; i++)
    {
        sum += weights[i];

        if (weights[i] < *minW)
        {
            *minW = weights[i];
        }

        if (weights[i] > *maxW)
        {
            *maxW = weights[i];
        }

        if (weights[i] < 48.0 || weights[i] > 52.0)
        {
            (*defectiveCount)++;
        }
    }
*avgW = sum / n;
}

void displayQualityReport(float minW, float maxW,float avgW, int defectiveCount,int totalParts)
{
    float defectRate;
    defectRate = ((float)defectiveCount / totalParts) * 100;

    printf("=============================================\n");
    printf("          BATCH QUALITY AUDIT REPORT\n");
    printf("=============================================\n");
    printf("Total Parts Inspected : %d\n", totalParts);
    printf("Minimum Weight : %.2f kg\n", minW);
    printf("Maximum Weight : %.2f kg\n", maxW);
    printf("Average Weight : %.2f kg\n", avgW);
    printf("---------------------------------------------\n");
    printf("Defective Parts Count : %d\n", defectiveCount);
    printf("Defect Rate : %.2f%%\n", defectRate);
    printf("Acceptance Threshold : <= 10.00%%\n");
    printf("---------------------------------------------\n");

    if (defectRate <= 10.0) printf("Final Batch Verdict : BATCH APPROVED FOR DISPATCH\n");
    else printf("Final Batch Verdict : BATCH REJECTED / RE-INSPECTION REQUIRED\n");

    printf("=============================================\n");
}

int main()
{
    float minWeight, maxWeight, avgWeight;
    int defectCount, n;

    printf("=== Metallurgy Quality Assurance Lab ===\n");

    printf("Enter number of steel shafts inspected (1 to 50): ");
    scanf("%d", &n);

    float weights[n];

    if (n < 1 || n > 50)
    {
        printf("Invalid number of components. Please enter a value from 1 to 50.\n");
        return 1;
    }

    printf("Enter the weights (in kg) for %d parts:\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("Part %d: ", i + 1);
        scanf("%f", &weights[i]);
    }

    analyzeShipment(weights, n,&minWeight, &maxWeight,&avgWeight, &defectCount);

    displayQualityReport(minWeight, maxWeight,avgWeight, defectCount, n);
}
