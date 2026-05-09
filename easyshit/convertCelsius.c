#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Info: Ekam Kooner, 91729749, ekooner@student.ubc.ca, L2A

int main(void){
    int numberOfTemperatures;
    int count = 0;
    double increment;
    double celsius;
    double fahrenheit;

    printf("Please enter starting temperature in degrees Celsius: ");
    scanf("%lf", &celsius);

    printf("Please enter the increment: ");
    scanf("%lf", &increment);

    do{
        printf("Please enter the number of temperatures to convert: ");
        scanf("%d", &numberOfTemperatures);

        if (numberOfTemperatures <= 0){
            printf("Error: input invalid\n");
        }
    } while (numberOfTemperatures <= 0);

    printf("\n");
    while (count < numberOfTemperatures){
        fahrenheit = (9.0/5.0) * celsius + 32.0;
        printf("%0.2lf      %0.2lf\n", celsius, fahrenheit);

        celsius += increment;
        count++;
    }

    return 0;
}
