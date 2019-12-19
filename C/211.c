#include <stdio.h>

int main()
{
    int n, l, c;

    scanf("%d", &n);

    int mapa1[n][n], mapa2[n][n];

    for (l = 0; l < n; l++) //Faz a leitura do mapa 1
    {
        for (c = 0; c < n; c++)
        {
            scanf("%d", &mapa1[l][c]);
        }
    }
    for (l = 0; l < n; l++) //Faz a leitura do mapa 2
    {
        for (c = 0; c < n; c++)
        {
            scanf("%d", &mapa2[l][c]);
        }
    }

    for (l = 0; l < n; l++) //Imprime a soma de cada elemento formatado
    {
        for (c = 0; c < n; c++)
        {
            printf("%d ", mapa1[l][c] + mapa2[l][c]);
        }
        putchar('\n');
    }

    return 0;
}