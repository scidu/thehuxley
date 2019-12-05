#include <stdio.h>

int main()
{
    int n, i, i2, soma = 0;
    float media;
    int numeros[1000];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < n; i++)
    {
        soma = soma + numeros[i];
    }

    media = soma / (float)n;

    printf("Media: %f\n", media);

    printf("Numeros:");

    for (i = 0; i < n; i++)
    {
        printf("%d ", numeros[i]);
    }

    return 0;
}