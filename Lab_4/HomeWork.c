#include <stdio.h>
#include <string.h>

int isUpperCase(char ch){
    if (ch >= 'A' && ch <= 'Z') return 1;
    else return 0;
}

int isAlphaNumeric(char ch){
    if ((ch >= 'A' && ch <= 'Z') ||(ch >= 'a' && ch <= 'z') ||(ch >= '0' && ch <= '9')) return 1;
    else return 0;
}

int validateSKU(char sku[]){
    int length, i;

    length = strlen(sku);
    if (length != 5) return 0;
    if (!isUpperCase(sku[0]) || !isUpperCase(sku[1])) return 0;

    for (i = 2; i < 5; i++)
        if (!isAlphaNumeric(sku[i])) return 0;

    return 1;
}

int main(){
    int choice;
    char sku[100];

    do{
        printf("\n====================================\n");
        printf(" E-COMMERCE SKU VALIDATOR TOOL \n");
        printf("====================================\n");
        printf("1. Validate SKU Code\n");
        printf("2. Exit\n");
        printf("Enter your choice (1-2): ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                printf("Enter 5-character SKU code: ");
                scanf("%99s", sku);

                if (validateSKU(sku)) printf("Result: Valid SKU - Accepted for cataloging.\n");
                else printf("Result: Invalid SKU - Format mismatch.\n");
                break;

            case 2:
                printf("Exiting system... Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please enter 1 or 2.\n");
        }

    } while (choice != 2);
}
