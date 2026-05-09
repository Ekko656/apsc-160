#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int length = 0;
    int temp = 0;
    
    printf("Enter a string:\n");
    scanf("%s", string);
    
    length = strlen(string);
    printf("Length: %d\n", length);
    
    int max = length - 1;
    
    for(int i = 0; i < length/2; i++){
        
        temp = string[i];
        string[i] = string[max];
        string[max] = temp;
        
        max--;
    }
    
    printf("%s\n", string);
    return 0;
}