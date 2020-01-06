#include <stdio.h>

void visitar(int i, int visitados[], int buracos[])
{
    visitados[i] = 1;
    int proximo = buracos[i];
    if (visitados[proximo] == 0)
    {
        visitar(proximo, visitados, buracos);
    }
}

int main()
{
    int n, i;

    scanf("%d", &n);

    int buracos[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &buracos[i]);
    }
    int tocas = 0;
    int visitados[n];

    for (i = 0; i < n; i++)
    {
        visitados[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        if (visitados[i] == 0)
        {
            visitar(i, visitados, buracos);
            tocas++;
        }
    }

    printf("%d", tocas);

    return 0;
}