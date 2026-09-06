#include <stdio.h>

int main() {
    char username[100];
    int length = 0;

    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);

    for (int i = 0; username[i] != '\0'; i++) {

        if (username[i] == '\n') {
            username[i] = '\0';
            break;
        }

        if (username[i] >= 'A' && username[i] <= 'Z') username[i] = username[i] + 32;
        if (username[i] == ' ') username[i] = '_';

        length++;
    }

    printf("Sanitized username: %s\n", username);
    printf("Total characters: %d\n", length);
}
