#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//word will be vertical or horizontal - two indexers?
int findWord(char grid[5][5], char target[]){
    
    int length = strlen(target);
    char checkArray[length];
    
    //starting row
    for(int r = 0; r < 5; r++){

        //starting column
        for(int c = 0; c < 5; c++){

            //check horizontally
            if(c + length <= 5){
                int match = 1; //assume word is found
                for(int i = 0; i < length; i++){
                    if((target[i] != grid[r][c + i])){
                        match = 0; //disprove assumption
                        break;
                    }
                }
                if(match == 1) return 1;
            }

            //check vertically
            if(r + length <= 5){
                int match = 1; //assume word is found
                for(int j = 0; j < length; j++){
                    if(target[j] != grid[r + j][c]){
                        match = 0; //disprove assumption
                        break;
                    }
                }
                if(match == 1) return 1;
            }
        }
    }

    return 0;
}







//claude test code:

// A quick helper function to print the test results cleanly
void runTest(char grid[5][5], char target[], int expected) {
    int result = findWord(grid, target);
    printf("Searching for '%-8s': ", target); // %-8s just pads spaces so things line up
    
    if (result == expected) {
        printf("[ PASS ] (Returned %d)\n", result);
    } else {
        printf("[ FAIL ] (Expected %d, got %d)\n", expected, result);
    }
}

int main(void) {
    // A test grid with hidden words
    char grid[5][5] = {
        {'c', 'a', 't', 's', 'q'},
        {'o', 'x', 'm', 'e', 'r'},
        {'d', 'u', 'g', 's', 'i'},
        {'e', 'a', 'o', 'p', 't'},
        {'x', 'q', 'm', 'v', 's'}
    };

    printf("--- RUNNING TEST SUITE ---\n\n");

    // 1. Standard Horizontal Match (Row 0)
    runTest(grid, "cats", 1);
    
    // 2. Standard Vertical Match (Column 0)
    runTest(grid, "code", 1);

    // 3. Not Found (Word isn't in the grid at all)
    runTest(grid, "bird", 0);

    // 4. Almost a Match (Ensures your inner loop doesn't celebrate early)
    runTest(grid, "catz", 0);

    // 5. Fits perfectly against the right wall (Row 1, ending at Col 4)
    runTest(grid, "mer", 1);

    // 6. Too big for the grid (Should return 0 without Seg-Faulting)
    runTest(grid, "catsqr", 0);

    // 7. Single letter test (Checking edge cases)
    runTest(grid, "q", 1);

    return 0;
}