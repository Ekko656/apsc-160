#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(void){
    srand(time(NULL));
    
    char words[3][100] = {"tree", "cat", "bird"};
    char targetWord[100];
    strcpy(targetWord, words[rand() % 3]);
    
    char letters[31];
    
    for(int i = 0; i < 30; i++){
        letters[i] = (rand() % 26) + 'a';
    }
    letters[30] = '\0';

    int length = strlen(targetWord);
    int startIndex = rand() % (30 - length + 1);

    for(int i = 0; i < length; i++){
        letters[startIndex + i] = targetWord[i];
    }

    printf("Here is the jumbled string: %s\n", letters);

    char guess[100];
    do{

        printf("Enter your guess\n");
        scanf("%s", guess);

        if(strcmp(guess, targetWord) == 0){
            printf("You win\n");
            return 0;
        } else{
            printf("Try again\n");
        }
    
    }while(strcmp(guess, targetWord) != 0);

    return 0;

    
}