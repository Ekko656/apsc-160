#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    int year;

    printf("Enter year: \n");
    scanf("%d", &year);

    if (year < 1582){
        printf("The Gregorian Calendar had not been adopted at that time.\n");
    } else if ((year%4 == 0 && year%100 != 0) || (year%400 == 0)){
        printf("%d is a leap year\n", year);
    } else if (year%100 != 0 && year%400 == 0){
        printf("%d is a leap year\n", year);
    } else{
        printf("%d is not a leap year\n", year);
        }

    return 0;

}

