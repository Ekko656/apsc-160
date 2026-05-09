/*
 * Author:   APSC 160 Instructor
 * Purpose:  Count values that appear in both arrays
 *           and fall within a given range
 */

#include <stdio.h>
#include <stdlib.h>

int countSharedInRange(int arrA[], int sizeA, int arrB[], int sizeB, int low, int high) {
    int indexA = 0;
    int count = 0;

    while(indexA < sizeA){
        int indexB = 0;

        while(indexB < sizeB){
            if(arrB[indexB] == arrA[indexA] && arrB[indexB] >= low && arrB[indexB] <= high){
                count++;
            }
            indexB++;
        }
    indexA++;
    }
    return count;
}

int main(void)
{
    /* YOUR CODE HERE: declare two arrays and test your function */

    return 0;
}