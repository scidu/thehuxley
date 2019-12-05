#include <stdio.h>

double fatorial(int n)
{
    double fat;

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

int proxprimo(int n)
{
    int novoprimo;

    n++;

    if (primo(n) == 0)
    {
        proxprimo(n);
    }
    else
    {
        novoprimo = n;
        return novoprimo;
    }
}

int main()
{
    int i, n;
    double soma = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (primo(i) || i == 1)
        {
            soma = soma + (fatorial(i)) / i;
            printf("%d!/%d", i, i);
        }
        else
        {
            soma = soma + (fatorial(i)) / proxprimo(i);
            printf("%d!/%d", i, proxprimo(i));
        }
        if (i < n)
        {
            printf(" + ");
        }
    }

    printf("\n%.2lf", soma);

    return 0;
}