#include <stdio.h>
#include <math.h>

int primo(int n)
{
    int divisor, achou;
    divisor = 2;
    achou = 0;
    if (n == 1 || n == 0 || n == 2)
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

int base2(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else
    {
        while (x % 2 == 0)
        {
            x /= 2;
        }
        if (x == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    int j, n, i;
    scanf("%d%d", &j, &n);
    for (i = 0; i < j; i++)
    {
        int k, pos1 = 0, pos2 = 0;
        int win1 = 0, win2 = 0;
        scanf("%d", &k);

        while (k > 0)
        {
            int d1, d2;
            scanf("%d%d", &d1, &d2);
            pos1 += d1;
            pos2 += d2;
            if (pos1 > n)
            {
                pos1 = 0;
                win1++;
            }
            if (pos2 > n)
            {
                pos2 = 0;
                win2++;
            }
            if (base2(pos1))
            {
                pos1 += 2;
            }
            else if (primo(pos1))
            {
                pos1 -= 2;
            }
            if (base2(pos2))
            {
                pos2 += 2;
            }
            else if (primo(pos2))
            {
                pos2 -= 2;
            }
            if (pos1 > n)
            {
                pos1 = 0;
                win1++;
            }
            if (pos2 > n)
            {
                pos2 = 0;
                win2++;
            }
            k--;
        }
        if (win1 > win2)
        {
            printf("Partida %d : Fabio venceu na posicao %d passando %d vezes pelo final do tabuleiro\n", i + 1, pos1, win1);
        }
        else if (win2 > win1)
        {
            printf("Partida %d : Ayalla venceu na posicao %d passando %d vezes pelo final do tabuleiro\n", i + 1, pos2, win2);
        }
        else
        {
            if (pos1 > pos2)
            {
                printf("Partida %d : Fabio venceu na posicao %d passando %d vezes pelo final do tabuleiro\n", i + 1, pos1, win1);
            }
            else if (pos1 < pos2)
            {
                printf("Partida %d : Ayalla venceu na posicao %d passando %d vezes pelo final do tabuleiro\n", i + 1, pos2, win2);
            }
            else
            {
                printf("Partida %d : Houve um empate nas posicoes %d e %d\n", i + 1, pos1, pos2);
            }
        }
    }
    return (0);
}