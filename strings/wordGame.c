#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WORDS 5
#define MAX_LEN 20

// "fisher yates shuffle" - store str[length - 1] in a temp variable, 
// swap str[length - 1] with some random index, then set the random index as the temp variable
// index entire array

void shuffle(char str[]) {
    int length = strlen(str);
    int i, r;
    char temp;

    for (i = length - 1; i > 0; i--) {
        r = rand() % (i + 1);
        temp = str[i];
        str[i] = str[r];
        str[r] = temp;
    }
}

void playGame() {
    char animals[MAX_WORDS][MAX_LEN] = {
        "lion", "tiger", "zebra", "horse", "sheep"
    };

    char word1[MAX_LEN];
    char word2[MAX_LEN];

    int r1 = rand() % MAX_WORDS;
    int r2;

    // ensure different words
    do {
        r2 = rand() % MAX_WORDS;
    } while (r1 == r2);

    strcpy(word1, animals[r1]);
    strcpy(word2, animals[r2]);

    // concatenate words
    char combined[2 * MAX_LEN];
    strcpy(combined, word1);
    strcat(combined, word2);

    // shuffle to make an anagram - this part is given to you in lab (you still have to make shuffle function yourself)
    char shuffledCombined[2 * MAX_LEN];
    strcpy(shuffledCombined, combined);
    shuffle(shuffledCombined);

    printf("Shuffled string: %s\n", shuffledCombined);

    int attempts = 5;
    int found1 = 0, found2 = 0;

    // game loop with max 5 attempts
    while (attempts > 0) {
        char guess[MAX_LEN];

        printf("\nAttempts left: %d\n", attempts);
        printf("Enter guess: ");
        scanf("%s", guess);

        if (strcmp(guess, word1) == 0 && found1 == 0) {
            printf("You found word1!\n");
            found1 = 1;
        }
        else if (strcmp(guess, word2) == 0 && found2 == 0) {
            printf("You found word2!\n");
            found2 = 1;
        }
        else {
            printf("Wrong guess.\n");
        }

        if (found1 == 1 && found2 == 1) {
            printf("\nYou found both words!\n");
            return;
        }

        attempts--;
    }

    printf("\nGame over.\n");
    printf("The words were: %s and %s\n", word1, word2);
}

int main() {
    srand(time(NULL));
    playGame();
    return 0;
}