#include <stdio.h>
#include <stdlib.h>
//Info: Ekam Kooner, 91729749, ekooner@student.ubc.ca, L2A

void printStars(int count, char symbol);
void printRow(int num);
char flip(char c);

int main(void){
    int size;

    do{
        printf("Enter the size of the table (1-9):\n");
        scanf("%d", &size);
        
        if (size < 1 || size > 9){
            printf("Error: Size invalid\n");
        }

    } while (size < 1 || size > 9);

    printRow(size);
        
    return 0;
    }
    
    void printStars(int count, char symbol){
        
        int star = 0;
        
        while (star < count){
            printf(" %c", symbol);
            star++;
        }
    }
    
    void printRow (int num){
        int row = 1;
        char symbol = '!';
        
        while (row <= num){
            printStars(row, symbol);
            symbol = flip(symbol);
            
            printf("\n");
            row ++;
        }
    }
    
    char flip(char c){
        if (c == '!'){
            c = 'x';
        } else {
            c = '!';
        }
        
        return c;
    }
