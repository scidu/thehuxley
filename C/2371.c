#include <stdio.h>
#include <string.h>

int main()
{
    char pos[8];

    int limiar, n, l, c, somacima = 0, somabaixo = 0;

    scanf("%s", pos);
    scanf("%d%d", &limiar, &n);

    int matriz[n][n];

    for (l = 0; l < n; l++)
    {
        for (c = 0; c < n; c++)
        {
            scanf("%d", &matriz[l][c]);
        }
    }

    if (strcmp(pos, "acima") == 0)
    {
        for (l = 0; l < n; l++)
        {
            for (c = 0; c < n; c++)
            {

                if (c > l)
                {
                    somacima += matriz[l][c];
                }
            }
        }
        if (somacima > limiar)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
    else if (strcmp(pos, "abaixo") == 0)
    {
        for (l = 0; l < n; l++)
        {
            for (c = 0; c < n; c++)
            {
                if (l > c)
                {
                    somabaixo += matriz[l][c];
                }
            }
        }
        if (somacima > limiar)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
    return 0;
}