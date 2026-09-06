#include <stdio.h>

int main() {
    int N, target, found = 0;

    printf("Enter number of patients: ");
    scanf("%d", &N);

    int patientID[N];


    printf("Enter %d patient registration numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &patientID[i]);
    }


    printf("Enter target Patient ID: ");
    scanf("%d", &target);

    for (int i = 0; i < N; i++) {
        if (patientID[i] == target) {
            printf("Patient ID found at index: %d\n", i);
            found = 1;
            break;
        }
    }

    if (found == 0) printf("Patient ID Not Found\n");

}
