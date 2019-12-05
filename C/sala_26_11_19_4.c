#include <stdio.h>

int main()
{
    int n, i, maior = 0;
    int numeros[1000];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
    }

    printf("%d", maior);

    return 0;
}