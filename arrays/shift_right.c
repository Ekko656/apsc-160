#include <stdio.h>
#include <stdlib.h>

void rotate(int data[], int size, int k) {
    
    int i = 0;
    while(i < k){
        int end_pointer = data[size - 1];
        int push = size - 1;
        
        while(push > 0){
            data[push] = data[push - 1];
            push--;
        }
        
        data[0] = end_pointer;
        i++;
    }
}

int main(void) {
    int data[] = { 1, 2, 3, 4, 5 };
    int size = 5;
    int i = 0;

    printf("Before: ");
    while (i < size) {
        printf("%d ", data[i]);
        i++;
    }

    rotate(data, size, 3);

    printf("\nAfter:  ");
    i = 0;
    while (i < size) {
        printf("%d ", data[i]);
        i++;
    }
    printf("\n");

    return 0;
}