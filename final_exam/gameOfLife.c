#include <stdio.h>
#include <stdlib.h>

#define ROWS 4
#define COLS 5

int count_live_neighbors(int original[ROWS][COLS], int currentRow, int currentCol) {
    int count = 0;
// TODO: count live neighbours
    int i = -1;
    while(i <= 1){
        int j = -1;

        while(j <= 1){
            if(i != 0 || j != 0){
                int nRow = i + currentRow;
                int nCol = j + currentCol;

                if(nRow >= 0 && nRow < ROWS && nCol >= 0 && nCol < COLS){
                    if(original[nRow][nCol] == 1){
                        count++;
                    }
                }
            }
            j++;
        }
        i++;
    }
    return count;
}
   


void game_of_life(int board[ROWS][COLS]) {
    int original[ROWS][COLS];
    // TODO: copy board into original
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            original[i][j] = board[i][j];
        }
    }

    for (int r = 0; r < ROWS; r++)
        for (int c = 0; c < COLS; c++) {
            // TODO: get neighbor count, apply rules, write to board[r][c]
            int count = count_live_neighbors(original, r, c);
            
            if(original[r][c] == 1){
                if(count < 2){
                    board[r][c] = 0;
                } else if(count == 2 || count == 3){
                    board[r][c] = 1;
                } else{
                    board[r][c] = 0;
                }
            } else if (original[r][c] == 0){ 
                if(count == 3){
                    board[r][c] = 1;
                }
            }

        }
}

//claude code for test:

void print_board(int board[ROWS][COLS]) {
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            printf(board[r][c] ? "O " : ". ");
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    // 1. Give you a board
    int board[ROWS][COLS] = {
        {0, 0, 0, 0, 0},
        {0, 1, 1, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 0, 0, 1, 1}
    };

    // 2. Print original
    printf("Original:\n");
    print_board(board);

    // Apply rules
    game_of_life(board);

    // 3. Print new board
    printf("New:\n");
    print_board(board);

    return 0;
}