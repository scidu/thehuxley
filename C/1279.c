#include <stdio.h>

int main()
{
    int n, l, c;

    scanf("%d", &n);

    if (n == 0)
    {
        printf("Vazia");
    }
    else
    {
        int matriz1[n][n], matriz2[n][n];

        for (l = 0; l < n; l++) //Ler a matriz1
        {
            for (c = 0; c < n; c++)
            {
                scanf("%d", &matriz1[l][c]);
            }
        }
        for (l = 0; l < n; l++) //Ler a matriz2
        {
            for (c = 0; c < n; c++)
            {
                scanf("%d", &matriz2[l][c]);
            }
        }

        for (l = 0; l < n; l++)
        {
            for (c = 0; c < n; c++)
            {
                printf("%d\n", matriz1[l][c] + matriz2[l][c]);
            }
        }
    }

    return 0;
}