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

int main()
{
    int n, i, maior1 = 0, maior2 = 0, mdcf;
    int numeros[1000], binario[1000];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (primo(numeros[i]) == 1)
        {
            binario[i] = 1;
        }
        else if (primo(numeros[i]) == 0)
        {
            binario[i] = 0;
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d", binario[i]);
    }
    
    return 0;
}