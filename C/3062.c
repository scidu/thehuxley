#include <stdio.h>

int main()
{
    int n, m, i, l, c;

    scanf("%d%d", &n, &m);

    int matriz[n][m];

    for (l = 0; l < n; l++)
    {
        for (c = 0; c < m; c++)
        {
            scanf("%d", &matriz[l][c]);
        }
    }

    int x, y, k, soma = 0;

    scanf("%d%d", &x, &y);

    scanf("%d", &k);

    for (i = 0; i < k; i++)
    {
        int com;

        scanf("%d", &com);

        if (com == 0) // Comando 0
        {
            if (x + 1 > n - 1 || y - 1 < 0)
            {
                soma += matriz[x][y];
            }

            else
            {
                y -= 1;
                x += 1;
                soma += matriz[x][y];
            }
        }
        else if (com == 1)
        {
            if (x - 1 < 0 || y - 1 < 0)
            {
                soma += matriz[x][y];
            }
            else
            {

                y -= 1;
                x -= 1;
                soma += matriz[x][y];
            }
        }
        else if (com == 2)
        {
            if (x + 1 > n - 1 || y + 1 > m - 1)
            {
                soma += matriz[x][y];
            }
            else
            {

                x += 1;
                y += 1;
                soma += matriz[x][y];
            }
        }
        else if (com == 3)
        {
            if (x - 1 < 0 || y + 1 > m - 1)
            {
                soma += matriz[x][y];
            }
            else
            {

                x -= 1;
                y += 1;
                soma += matriz[x][y];
            }
        }
    }
    printf("%d", soma);

    return 0;
}