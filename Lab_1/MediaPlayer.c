#include <stdio.h>

int main(){
    int s, ss, m, mm, hh;

    printf("Enter total seconds: ");
    scanf("%d", &s);

    ss= s%60;
    m= s/60;
    mm= m%60;
    hh= m/60;

    printf("Total hours: %d \n",hh );
    printf("Total minutes: %d \n",mm );
    printf("Total seconds: %d \n",ss );
}
