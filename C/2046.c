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
    int count, i, primo;
    double elemento;

    scanf("%d", count);

    if (count == 0)
    {
        printf("0.00");
    }
    else
    {
        for (i = 1; i < count; i++)
        {
            elemento = fatorial(i) / primo;
            
        }
    }

    return 0;
}