#include <stdio.h>

int main()
{
    int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int vetorinv[10] = {0};
    int i, aux;

    for (i = 0; i < n / 2; i++)
    {
        aux = vetor[i];
        vetor[i] = vetor[n - 1 - i];
        vetor[n - 1 - i] = aux;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d", vetor[i]);
    }

    return 0;
}