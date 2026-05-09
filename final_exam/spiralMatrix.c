#include <stdio.h>

int spiral(int rows, int cols, int matrix[][cols], int result[]) {
    
    // Set the 4 physical boundaries
    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;
    
    int index = 0; 

    while (top <= bottom && left <= right) {
        
        // 1. Move RIGHT along the TOP wall
        for (int i = left; i <= right; i++) {
            result[index] = matrix[top][i];
            index++;
        }
        top++; // Shrink top wall down

        // 2. Move DOWN along the RIGHT wall
        for (int i = top; i <= bottom; i++) {
            result[index] = matrix[i][right];
            index++;
        }
        right--; // Shrink right wall left

        // 3. Move LEFT along the BOTTOM wall
        // Safety Check: Did the top and bottom walls cross?
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                result[index] = matrix[bottom][i];
                index++;
            }
            bottom--; // Shrink bottom wall up
        }

        // 4. Move UP along the LEFT wall
        // Safety Check: Did the left and right walls cross?
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                result[index] = matrix[i][left];
                index++;
            }
            left++; // Shrink left wall right
        }
    }
    
    return 0; 
}

int main(void) {
    // A 4x2 matrix to prove it doesn't double-count
    int rows = 4;
    int cols = 2;
    int matrix[4][2] = {
        {1, 2},
        {3, 4},
        {5, 6},
        {7, 8}
    };

    // Array to hold the final spiral output
    int gridSize = rows * cols;
    int result[gridSize];

    spiral(rows, cols, matrix, result);

    // Print the results
    printf("Spiral Order: ");
    for(int i = 0; i < gridSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}