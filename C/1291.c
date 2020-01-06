#include <stdio.h>

int main()
{
    int n = 3, l, c, delta, dp = 0, maior = -999999;
    double media = 0;
    int matriz[n][n];

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            scanf("%d", &matriz[l][c]);

            media += matriz[l][c];

            if (matriz[l][c] > maior)
            {
                maior = matriz[l][c];
            }
        }
    }

    media = media / 9;

    if (maior > 0)
    {
        delta = 1;
    }
    else if (maior < 0)
    {
        delta = -1;
    }
    else if (maior == 0)
    {
        delta = 0;
    }

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            if (l == c)
            {
                dp += matriz[l][c];
            }
        }
    }

    printf("%.2lf %d %d %d", media, maior, delta, dp);

    return 0;
}