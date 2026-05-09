#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int writer = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (int reader = 0; str[reader] != '\0'; reader++) {
        if(str[reader] != ' '){
            str[writer] = str[reader];
            writer++;
        } 
    }

    str[writer] = '\0';
    printf("Stripped: %s\n", str);
    printf("New length: %d\n", writer);

    return 0;
}