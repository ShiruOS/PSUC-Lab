#include <stdio.h>
int main() {
    int rows, cols;
    int totalVacant = 0;
    int maxVacant = -1;
    int maxRow = 0;


    printf("Enter number of rows (floors): ");
    scanf("%d", &rows);

    printf("Enter number of columns (spots per floor): ");
    scanf("%d", &cols);

    int parking[rows][cols];

    printf("Enter parking grid values (1 = Occupied, 0 = Vacant):\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Floor %d, Spot %d: ", i, j);
            scanf("%d", &parking[i][j]);
        }
    }


    printf("\n--- Garage Floor Layout Grid ---\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", parking[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        int vacantInRow = 0;

        for (int j = 0; j < cols; j++) {
            if (parking[i][j] == 0) {
                totalVacant++;
                vacantInRow++;
            }
        }

        if (vacantInRow > maxVacant) {
            maxVacant = vacantInRow;
            maxRow = i;
        }
    }

    printf("\n--- Parking Analysis ---\n");
    printf("Total Available (Vacant) Spots: %d\n", totalVacant);
    printf("Row (Floor Level) with Maximum Vacant Spots: Floor %d (%d spots available)\n",maxRow, maxVacant);
}
