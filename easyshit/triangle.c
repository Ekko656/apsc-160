#include <stdio.h>
#include <stdlib.h>
//Info: Ekam Kooner, 91729749, ekooner@student.ubc.ca, L2A

int main(void){
    int size;
    int star;
    int num;

    do{
        printf("Enter the size of the table (1-9):\n");
        scanf("%d", &size);
        
        if (size < 1 || size > 9){
            printf("Error: Size invalid");
        }

    } while (size < 1 || size > 9);

    int row = 1;
    while (row <= size){

        star = size - row;

        while (star > 0){
            printf(".");
            star--;
        }

        num = 1;

        while (num <= row){
            printf("%d", num);
            num++;
            }

        printf("\n");
        row++;
    }
        
    return 0;
    }

