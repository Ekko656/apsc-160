#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    char str[11];

    for (int i = 0; i < 10; i++) {
        str[i] = 'a' + rand() % 26;
    }
    str[10] = '\0';

    printf("%s\n", str);

    int vowelCount = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            vowelCount++;
        }
    }

    int guess;
    do {
        printf("How many vowels? ");
        scanf("%d", &guess);
    } while (guess != vowelCount);

    printf("You win!\n");
    return 0;
    // generate, count vowels, guessing loop
}