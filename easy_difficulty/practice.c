#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int size;
    int row = 0;;
    int column;

    do{
        printf("Enter size of checkerboard:\n");
        scanf("%d", &size);

        if(size < 1 || size > 9){
            printf("Error size invalid\n");
        }
    } while (size < 1 || size > 9);

    while (row < size){

    }

}