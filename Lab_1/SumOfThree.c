#include <stdio.h>

int main(){
    int num, n;
    int sum=0;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    while (num>0){
        n= num%10;
        sum+=n;
        num/=10;
    }

    printf("Sum of digits of the number is %d",sum);
}
