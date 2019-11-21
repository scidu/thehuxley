#include <stdio.h>

int main()
{

    int n, r, d, rf;
    d = 3;
    r = 0;

    scanf("%d", &n);

    while (d <= n)
    {
        if (n % d == 0)
        {
            if (d % 3 == 0)
            {
                r++;
            }
        }
        d++;
    }

    if (r > 0)
    {
        printf("%d", r);
        ;
    }
    else
    {
        printf("O numero nao possui divisores multiplos de 3!");
    }

    return 0;
}