#include <stdlib.h>

int distance(int arr1[], int size1, int arr2[], int size2) {
    int minDist = abs(arr1[0] - arr2[0]);  /* initialize to first pair */
    int indexA = 0;

    while (indexA < size1){
        int indexB = 0;
        while (indexB < size2){
            if(abs(arr1[indexA] - arr2[indexB]) < minDist){
                minDist = abs(arr1[indexA] - arr2[indexB]);
            }
            indexB++;
        }
        indexA++;
    }

    return minDist;
}