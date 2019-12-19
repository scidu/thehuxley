#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, i, i2 = 0, i3 = 0, i4, n, qntchar, l, c;
    char cifrado[100000] = {'\0'};

    scanf("%d", &t);

    getchar();

    for (i = 0; i < t; i++)
    {
        gets(cifrado);

        qntchar = strlen(cifrado);

        n = sqrt(qntchar);

        char matriztexto[n][n];

        if (n * n != qntchar)
        {
            printf("INVALIDO\n");
        }
        else
        {
            for (l = 0; l < n; l++)
            {
                for (c = 0; c < n; c++)
                {
                    matriztexto[l][c] = cifrado[i2];
                    i2++;
                }
            }
            i2 = 0;

            for (c = 0; c < n; c++)
            {
                for (l = 0; l < n; l++)
                {
                    printf("%c", matriztexto[l][c]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}