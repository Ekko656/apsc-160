#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    char setups[4][100] = {
        "Why don't scientists trust atoms?",
        "Why did the scarecrow win an award?",
        "Why can't you give Elsa a balloon?",
        "Why did the math book look so sad?"
    };

    char punchlines[4][100] = {
        "Because they make up everything!",
        "Because he was outstanding in his field!",
        "Because she will let it go!",
        "Because it had too many problems!"
    };

    int chosen = rand() % 4;
    printf("Setup: %s\n\n", setups[chosen]);

    // copy punchlines into shuffled array and shuffle it
    char shuffled[4][100];
    // your code here
    for(int i = 0; i < 4; i++){
        strcpy(shuffled[i], punchlines[i]);
    }

    for(int i = 3; i > 0; i--){
        int r = rand() % (i + 1);
        char temp[100];

        strcpy(temp, shuffled[i]);
        strcpy(shuffled[i], shuffled[r]);
        strcpy(shuffled[r], temp);
    }

    // print shuffled options 1-4
    for(int i = 0; i < 4; i++){
        printf("%d. %s", i + 1, shuffled[i]);
    }
    // your code here

    // guessing loop — keep asking until strcmp matches
    
    // your code here

    return 0;
}