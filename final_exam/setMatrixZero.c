#include <stdio.h>
#include <stdlib.h>

int zero(int rows, int cols, int matrix[][cols]){

    int original[rows][cols];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            original[i][j] = matrix[i][j];
        }
    } 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(original[i][j] == 0){
                int x = i;
                int y = 0;
                while(y < cols){
                    matrix[x][y] = 0;
                    y++;
                }
                

                int w = 0;
                int z = j;
                while(w < rows){
                    matrix[w][z] = 0;
                    w++;
                }
            }
        }
    } 
    return 0; 
}










// Helper function to print matrices cleanly
void printMatrix(int rows, int cols, int matrix[][cols]) {
    for(int r = 0; r < rows; r++) {
        for(int c = 0; c < cols; c++) {
            printf("%2d ", matrix[r][c]);
        }
        printf("\n");
    }
}

int main(void) {
    
    printf("--- TEST CASE 1: 3x3 Matrix (One Zero in Center) ---\n");
    int r1 = 3, c1 = 3;
    int m1[3][3] = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };
    printf("Before:\n");
    printMatrix(r1, c1, m1);
    zero(r1, c1, m1);
    printf("After:\n");
    printMatrix(r1, c1, m1);
    printf("\n");

    printf("--- TEST CASE 2: 3x4 Matrix (Two Zeros) ---\n");
    int r2 = 3, c2 = 4;
    int m2[3][4] = {
        {0, 1, 2, 0},
        {3, 4, 5, 2},
        {1, 3, 1, 5}
    };
    printf("Before:\n");
    printMatrix(r2, c2, m2);
    zero(r2, c2, m2);
    printf("After:\n");
    printMatrix(r2, c2, m2);
    printf("\n");

    printf("--- TEST CASE 3: 4x2 Matrix (No Zeros) ---\n");
    int r3 = 4, c3 = 2;
    int m3[4][2] = {
        {1, 2},
        {3, 4},
        {5, 6},
        {7, 8}
    };
    printf("Before:\n");
    printMatrix(r3, c3, m3);
    zero(r3, c3, m3);
    printf("After:\n");
    printMatrix(r3, c3, m3);
    printf("\n");

    return 0;
}