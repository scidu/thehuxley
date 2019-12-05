#include <stdio.h>

int main()
{
    int n, i, i2;
    int numeros[1000];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numeros[i]);
    }

    printf("Numeros pares:");

    for (i = 0; i < n; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            printf("%d ", numeros[i]);
        }
    }

    return 0;
}
