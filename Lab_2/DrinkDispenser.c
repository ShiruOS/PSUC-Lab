#include <stdio.h>

int main(){
        int ch;
        float total;
    do{
        ch=0;
        printf("1. Water (Rs. 10.00) \n2. Coffee (Rs. 20.00) \n3. Juice (Rs. 25) \n4. Exit / Checkout \n");
        printf("Enter Your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("You choose Water \nAdding Rs. 10.00 to your total bill \n");
                total+= 10;
                break;

            case 2:
                printf("You choose Coffee\nAdding Rs. 20.00 to your total bill \n");
                total+= 20;
                break;

            case 3:
                printf("You choose Juice\nAdding Rs. 25.00 to your total bill \n");
                total+= 25;
                break;

            case 4:
            printf("You choose to Exit \nExiting now... \n\n");
                break;

            default:
            printf("Your choice is invalid, Please enter an option 1-4 \n");
        }
        printf("Total Bill: %.2f \n\n", total);
    }while(ch!=4);
}
