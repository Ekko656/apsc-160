#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int getLongestPrefix(char strings[][100], int numberOfStrings, char longestPrefix[]){
    
    if(numberOfStrings == 0){
        longestPrefix[0] = '\0';
        return 0;
    }

    for(int j = 0; j < 100; j++){

        char letter = strings[0][j];

        if(letter == '\0'){
            longestPrefix[j] = '\0';
            return j;
        }

        for(int i = 0; i < numberOfStrings; i++){
            if(strings[i][j] != letter || strings[i][j] == '\0'){
                longestPrefix[j] = '\0';
                return j;
            }
        }

        longestPrefix[j] = letter;
    }
    
    return 0;
}