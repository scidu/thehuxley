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
    int n;

    scanf("%d", &n);

    while (n != -1)
    {
        printf("%d\n", primo(n));
        scanf("%d", &n);
    }

    return 0;
}