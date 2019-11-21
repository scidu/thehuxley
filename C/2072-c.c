#include <stdio.h>

int main()
{
    int M, x, y, m, a, b, aux;
    char direcao[100000];
    char direita[] = "D";
    char cima[] = "C";

    x = 0;
    y = 0;
    m = 0;

    scanf("%d", &M);
    for (a = 0; a < M; a++)
    {

        scanf("%s", &direcao[a]);

    }
    for (b = 0; b < M; b++)
    {
        if (direcao[b] == direita[0])
        {
            aux = x;
            x++;
            if (x == y)
            {
                if (direcao[b + 1] == direita[0])
                {
                    if ((aux > y) && (y > (x + 1)))
                    {
                        m++;
                    }
                    else if ((aux < y) && ((x + 1) > y))
                    {
                        m++;
                    }
                }
                else if (direcao[b + 1] == cima[0])
                {
                    if ((aux > y) && ((y + 1) > x))
                    {
                        m++;
                    }
                    else if ((aux < y) && (x > (y + 1)))
                    {
                        m++;
                    }
                }
            }
        }
        else if (direcao[b] == cima[0])
        {
            aux = y;
            y++;
            if (x == y)
            {
                if (direcao[b + 1] == direita[0])
                {
                    if ((aux > x) && ((x + 1) > y))
                    {
                        m++;
                    }
                    else if ((aux < x) && (y > x + 1))
                    {
                        m++;
                    }
                }
                else if (direcao[b + 1] == cima[0])
                {
                    if ((aux > x) && ((y + 1) < x))
                    {
                        m++;
                    }
                    else if ((aux < x) && (x < (y + 1)))
                    {
                        m++;
                    }
                }
            }
        }
    }

    printf("%d\n", m);
    return 0;
}