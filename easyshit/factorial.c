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

int main(void)
{
    int n;

    scanf("%d", &n);
    printf("%d\n", factorial(n));

    return 0;
}