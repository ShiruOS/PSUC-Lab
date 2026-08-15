#include <stdio.h>

int main(){
    int op, shift;
    char ch;
    const char EOL='\n';
    while (1) {

        printf("--- CAESAR CIPHER TOOL --- \n1. Encode a Message \n2. Decode a Message \n3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &op);

        if (op==1) {

            printf("Enter shift level K (1-25): ");
            scanf("%d", &shift);
            if (shift<1 || shift>25) {
                printf("Out of range shift level K \n");
                continue;
            }

            printf("Enter plaintext message (Press Enter when done):\n");
            scanf("%c",&ch);
            while (1) {
                scanf("%c", &ch);

                if (ch==EOL){
                    break;
                }

                if ('A'<=ch && ch <='Z') {
                    ch+=shift;
                    if (ch >'Z'){
                        ch-=26;
                    }
                }else if ('a'<=ch && ch <='z') {
                    ch+=shift;
                    if (ch >'z'){
                        ch-=26;
                    }
                }

                printf("%c", ch);
            }


        }else if (op==2) {

            printf("Enter shift level K (1-25): ");
            scanf("%d", &shift);
            if (shift<1 || shift>25) {
                printf("Out of range shift level K \n");
                continue;
            }

            printf("Enter encoded message (Press Enter when done):\n");
            scanf("%c",&ch);
            while (1) {
                scanf("%c", &ch);

                if (ch==EOL){
                    break;
                }

                if ('A'<=ch && ch <='Z') {
                    ch-=shift;
                    if (ch <'A'){
                        ch+=26;
                    }
                }else if ('a'<=ch && ch <='z') {
                    ch-=shift;
                    if (ch <'a'){
                        ch+=26;
                    }
                }

                printf("%c", ch);
            }

        }else if(op==3){
            printf("Exiting program... Goodbye");
            break;
        }else{
            printf("Invalid choice...Please try again \n");
        }
        printf("\n");
    }
}
