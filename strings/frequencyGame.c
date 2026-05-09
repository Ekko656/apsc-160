#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    char str[21];
    srand(time(NULL));

    for(int i = 0; i < 20; i++){
        str[i] = 'a' + rand() % 26;
    }
    str[20] = '\0';
    printf("Sequence: %s\n", str);


    int freq[26] = {0};
    for(int i = 0; i < 20; i++){
        freq[str[i] - 'a']++;
    }

    int max = 0;
    char mostFrequent;
    for(int i = 0; i < 26; i++){
        if(freq[i] > max){
            max = freq[i];
            mostFrequent = 'a' + i;
        }
    }

    char guess;
    do{
        printf("Enter guess: \n");
        scanf(" %c", &guess);
    } while(guess != mostFrequent);

    if(guess == mostFrequent){
        printf("You win!\n");
    }

    return 0;
}