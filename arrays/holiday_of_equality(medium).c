#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int citizens[] = { 5, 3, 4, 4, 7 };
    int size = 5;
    int i = 0;
    double max = 0;

    while(i < size){
        if(citizens[i] > max){
            max = citizens[i];
        }
        i++;
    }
    
    double sum = 0;
    i = 0;
    while(i < size){
        sum += (max - citizens[i]);
        i++;
    }

    printf("The max sum is: %3lf\n", sum);

    return 0;
}