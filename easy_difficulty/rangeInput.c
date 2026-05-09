#include <stdio.h>

int getInputInRange(int min, int max)
{
    int x;

    printf("Enter an integer between %d and %d inclusive: ", min, max);
    scanf("%d", &x);

    while (x < min || x > max)
    {
        printf("Error: value must be between %d and %d inclusive.\n", min, max);
        printf("Enter an integer between %d and %d inclusive: ", min, max);
        scanf("%d", &x);
    }

    return x;
}

int main(void)
{
    int min;
    int max;
    int value;

    scanf("%d %d", &min, &max);
    value = getInputInRange(min, max);
    printf("%d\n", value);

    return 0;
}