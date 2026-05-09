/*
 * Author:   APSC 160 Instructor
 * Purpose:  Print the number of values in the array that
 *           are below the average of all elements.
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(void)
{
    int data[] = { 4, 18, 7, -3, 25, 11, 2, 30, 9, 14 };

    double sum = 0.0;
    double average = 0.0;
    int count = 0;
    int index = 0;

    /* YOUR CODE HERE: compute the sum of all elements */

for (int i = 0; i < SIZE; i++){
    sum += data[i];
}

average = sum/SIZE;

index = 0;
while(index < SIZE){
    if(data[index] < average){
        count++;
    }
    index++;
}

    printf("%d\n", count);

    return 0;
}