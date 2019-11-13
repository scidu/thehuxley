#include <stdio.h>

int fatorial(int n)
{
    int fat;

    if (n <= 1)
    {
        return 1;
    }
    else
    {
        fat = n * fatorial(n - 1);
        return (fat);
    }
}

int main()
{
    int res, n;

    scanf("%d", &n);
    while (n != -1)
    {
        res = fatorial(n);
        printf("%d\n", res);
        scanf("%d", &n);
    }

    return 0;
}