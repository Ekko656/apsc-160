#include <stdio.h>
#include <stdlib.h>

void shiftZeros(int data[], int size) {
    int low = 0;
    int high = size - 1;
    int temp;

    while(low < high){
        if(data[low] == 0 && data[high] != 0){
            temp = data[high];
            data[high] = data[low];
            data[low] = temp;
        }
        low++;
        high--;
    }
}

int main(void) {
    int data[] = { 0, 3, 0, 1, 0, 5, 2 };
    int size = 7;
    int i = 0;

    printf("Before: ");
    while (i < size) {
        printf("%d ", data[i]);
        i++;
    }

    shiftZeros(data, size);

    printf("\nAfter:  ");
    i = 0;
    while (i < size) {
        printf("%d ", data[i]);
        i++;
    }
    printf("\n");

    return 0;
}