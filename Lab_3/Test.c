#include <stdio.h>

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int marks[n];

    printf("Enter the marks of %d students:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &marks[i]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (marks[j] < marks[j + 1]) {
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }


    printf("\nMarks in descending order are\n");
    for (int i = 0; i < n; i++) printf("%d ", marks[i]);

    printf("\n\nTop 3 class scores are\n");

    for (int i = 0; i < n && i < 3; i++) printf("%d\n", marks[i]);

    float median;

    if (n % 2 == 1)  median = marks[n / 2];
    else  median = (marks[n / 2 - 1] + marks[n / 2]) / 2.0;


    printf("\nMedian score is %.2f\n", median);

    return 0;
}
