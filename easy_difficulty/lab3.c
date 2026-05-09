#include <stdio.h>
// Ekam Kooner, 91729749, ekooner@student.ubc.ca, L2A, February 9th 2026

int main(void){
    
    int num;
    int count;
    int row;
    int columns;
    
    // Validate input num
    do{
        scanf("%d", &num);
        
        if (num < 1 || num > 20){
            printf("error\n");
        }
        
    } while (num < 1 || num > 20);
    
    row = 0;
    columns = num;
    
    // Output num amount of rows
    while (row <= num){
        
        // Output num amount of numbers and decrease number of columns by 1 per row
        count = 1;
        
        while (count <= columns){
            
                printf("%3d", count);
                count++;
                
        }
        
        // Begin new row
        printf("\n");
        columns--;
        row++;
        
    }
    
    return 0;
}
