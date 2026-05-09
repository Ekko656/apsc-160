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

int main(void)
{
    int n;
    int r;

    scanf("%d %d", &n, &r);
    printf("%d\n", choose(n, r));

    return 0;
}