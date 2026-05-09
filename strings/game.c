#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // for rand and srand
#include <time.h>    // for time(NULL)

int main(void) {
    srand(time(NULL));  // seed random number generator once

    char words[4][10] = {"tree", "cat", "fly", "code"};  // 4 words, each up to 10 chars

    char *target = words[rand() % 4];  // pick a random word, target points to it
    int wordLen = strlen(target);      // get how long the word is

    int start = rand() % (30 - wordLen);  // random start index, minus wordLen so word doesn't go past position 29

    char result[31];  // 30 chars + \0

    for (int pos = 0; pos < 30; pos++) {
        if (pos >= start && pos < start + wordLen) {
            // we're inside the word's range
            // pos - start converts global position to word's local index
            // e.g. if start=5 and pos=7, target[7-5] = target[2] = 3rd letter of word
            result[pos] = target[pos - start];
        } else {
            // outside word range, just put random noise
            result[pos] = 'a' + rand() % 26;
        }
    }

    result[30] = '\0';  // null terminate the string

    printf("Find the hidden word: %s\n", result);

    char guess[20];
    do {
        printf("Your guess: ");
        scanf("%s", guess);          // read guess
    } while (strcmp(guess, target) != 0);  // 0 means equal, keep looping until correct

    printf("Correct!\n");
    return 0;
}