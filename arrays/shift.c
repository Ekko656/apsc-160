#include <stdio.h>

void rotateLeft(int arr[], int size);

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    rotateLeft(arr, size);
    printArray(arr, size); // expected: 2 3 4 5 1

    return 0;
}

void rotateLeft(int arr[], int size) {
    int saveIndex = 0;
    saveIndex = arr[0];
    for(int i = 0; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = saveIndex;
}