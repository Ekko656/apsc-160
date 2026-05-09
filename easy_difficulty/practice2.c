#include <stdio.h>

int main(void){
    double startingBalance;
    double monthlyDeposit;
    double interest;
    int currentMonth = 1;
    int numberOfMonths;
    double r;

    printf("Enter starting balance ($):\n");
    scanf("%lf", &startingBalance);

    printf("Enter monthly deposit ($):\n");
    scanf("%lf", &monthlyDeposit);

    printf("Enter annual interest rate (percentage):\n");
    scanf("%lf", &interest);

    do{
        printf("Enter number of months:\n");
        scanf("%d", &numberOfMonths);

        if (numberOfMonths <= 0){
            printf("Error: input invalid\n");
        }
    } while (numberOfMonths <= 0);

    printf("Months, Balance\n");

        
    while (currentMonth <= numberOfMonths){
        r = interest/1200;
        startingBalance = (startingBalance + monthlyDeposit) * (1 + r);

        printf("%d, %.2f\n", currentMonth, startingBalance);
        currentMonth++;
    }


    return 0;
}