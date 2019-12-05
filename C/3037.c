#include <stdio.h>

int primo(int n)
{
    int divisor, achou;
    divisor = 2;
    achou = 0;
    if (n == 1 || n == 0)
    {
        return 0;
    }
    else
    {
        while (divisor < n && !achou)
        {
            if (n % divisor == 0)
            {
                achou = 1;
            }
            else
            {
                divisor++;
            }
        }
        if (achou)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int mdc(int a, int b)
{
    int aux, resto;

    if (b > a)
    {
        aux = a;
        a = b;
        b = aux;
    }

    resto = a % b;

    while (resto != 0)
    {
        a = b;
        b = resto;
        resto = a % b;
    }

    return b;
}

int main()
{
    int t, n, m, i, a, p, aux;

    scanf("%d%d%d", &t, &n, &m);

    printf("%d %d ", n, m);

    a = m;
    aux = n;

    for (i = 2; i < t; i++)
    {

        if (primo(a) == 1)
        {
            p = a * 2;
        }
        else if (mdc(a, aux) == 1)
        {
            p = (2 * ((a) + (aux))) - 3;
        }
        else
        {
            p = a + 1;
        }

        printf("%d ", p);

        aux = a;
        a = p;
    }
    return 0;
}