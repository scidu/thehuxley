#include <stdio.h>

int main()
{
    int n, l, c, area, aream;

    scanf("%d", &n);

    int matriz[n][n];

    for (l = 0; l < n; l++)
    {
        for (c = 0; c < n; c++)
        {
            scanf("%d", &matriz[l][c]);
        }
    }

    for (l = 0; l < n; l++)
    {
        for (c = 0; c < n; c++)
        {
            if (matriz[l][c] == 1)
            {
                
            }
            
        }
    }



    /*for (l = 0; l < n; l++) // Imprime a matriz/Debug
    {
        for (c = 0; c < n; c++)
        {
            printf("%d", matriz[l][c]);
        }

        printf("\n");
    }*/

    return 0;
}