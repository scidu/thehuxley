#include <stdio.h>
#include <string.h>

int main()
{
    char acima[] = "acima";
    char abaixo[] = "abaixo";
    char string[7];
    int r, limiar, n, l, c, soma;

    fgets(string, 7, stdin);

    r = strlen(string);
    string[r - 1] = '\0';

    scanf("%d", &limiar);
    scanf("%d", &n);

    int A[n][n];

    for (l = 0; l < n; l++)
    {
        for (c = 0; c < n; c++)
        {
            scanf("%d", &A[l][c]);
        }
    }

    if (!strcmp(string, acima))
    {
        for (l = 0; l < n; l++)
        {
            for (c = l + 1; c < n; c++)
            {
                soma += A[l][c];
            }
        }
    }
    else
    {
        for (l = 0; l < n; l++)
        {
            for (c = 0; c < l; c++)
            {
                soma += A[l][c];
            }
        }
    }

    if (soma > limiar)
    {
        printf("True\n");
    }
    else if (soma < limiar)
    {
        printf("False\n");
    }

    return 0;
}