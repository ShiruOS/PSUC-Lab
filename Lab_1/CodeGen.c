#include <stdio.h>

int main(){
    char c1, c2, c3;

    printf("Enter a character: ");
    scanf("%c", &c1);
    printf("Enter a character: ");
    scanf("%c", &c2);
    scanf("%c", &c2);
    printf("Enter a character: ");
    scanf("%c", &c3);
    scanf("%c", &c3);

    printf("Character \t code \n");
    printf("%c \t\t %d \n", c1,c1);
    printf("%c \t\t %d \n", c2,c2);
    printf("%c \t\t %d \n", c3,c3);
    c1++;
    c2++;
    c3++;

    printf("Final code is: %c%c%c", c1,c2,c3);

}
