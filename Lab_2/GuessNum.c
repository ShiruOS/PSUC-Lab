#include <stdio.h>

int main(){
    int guess, num, attempt;
    num=42;
    attempt=0;
    do {
        printf("Guess the number: ");
        scanf("%d", &guess);

        if (guess>num) {
            printf("Too High! Try again\n");
        }else if (guess<num) {
            printf("Too Low! Try again\n");
        }
        attempt++;
    }while (guess!=num);
    printf("Congratulations! Solved in %d attempts", attempt);
}
