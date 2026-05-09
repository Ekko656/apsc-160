#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char word1[50], word2[50], result[110];

    printf("Enter word 1: ");
    scanf("%s", word1);
    printf("Enter word 2: ");
    scanf("%s", word2);

    // convert word1 to uppercase, word2 to lowercase using ctype
    for(int i = 0; word1[i] != '\0'; i++){
        word1[i] = toupper(word1[i]);
    }

    for(int i = 0; word2[i] != '\0'; i++){
        word2[i] = tolower(word2[i]);
    }

    // build result by concatenating word1 + "-" + word2 using strcat
    strcpy(result, word1);
    strcat(result, "-");
    strcat(result, word2);
    // print result, its length, and how many uppercase letters it has
    int length = strlen(result);
    int upper = 0;
    for(int i = 0; result[i] != '\0'; i++){
        if(isupper(result[i])){
            upper++;
        }
    }
    printf("Result: %s\n", result);
    printf("Length: %d\n", length);
    printf("Uppercase letters: %d\n", upper);

    return 0;
}