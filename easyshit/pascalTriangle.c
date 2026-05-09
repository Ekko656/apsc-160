#include <stdio.h>

int factorial(int n)
{
    int result = 1;
    int i = 2;

    while (i <= n)
    {
        result = result * i;
        i = i + 1;
    }

    return result;
}

int choose(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int getInputInRange(int min, int max)
{
    int x;

    printf("Please enter integer value between %d and %d: ", min, max);
    scanf("%d", &x);

    while (x < min || x > max)
    {
        printf("Error: value must be between %d and %d inclusive.\n", min, max);
        printf("Please enter integer value between %d and %d: ", min, max);
        scanf("%d", &x);
    }

    return x;
}

void printPascalsTriangle(int rows)
{
    int n = 0;

    while (n <= rows)
    {
        int spaces = (rows - n) * 2;

        while (spaces > 0)
        {
            printf(" ");
            spaces = spaces - 1;
        }

        int r = 0;
        while (r <= n)
        {
            printf("%4d", choose(n, r));
            r = r + 1;
        }

        printf("\n");
        n = n + 1;
    }
}

int main(void)
{
    int rows;

    rows = getInputInRange(1, 12);
    printPascalsTriangle(rows);

    return 0;
}