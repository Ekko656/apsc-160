/*
 * Author:   APSC 160 Instructor
 * Purpose:  Print the largest and second largest values
 *           found in an array.
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(void)
{
    int data[] = { -5, -7, 3, 1, 0, 23, -14, 35, 12, 16 };
    int index = 0;
    int maxVal = data[0];      /* initialize to first element */
    int secondVal = data[0];   /* initialize to first element */

    while(index < SIZE){
        if(data[index] > maxVal){
            secondVal = maxVal;
            maxVal = data[index];
        } else if(data[index] < maxVal && data[index] > secondVal){
            secondVal = data[index];
        }
        index++;
    }

    printf("Largest: %d\n", maxVal);
    printf("Second largest: %d\n", secondVal);

    return 0;
}