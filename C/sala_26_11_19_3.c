#include <stdio.h>

int main()
{
    int n, i;
    int numeros[1000];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numeros[i]);
    }

    printf("Multiplos de 3:");

    for (i = n; i >= 0; i--)
    {
        if (numeros[i] % 3 == 0 && numeros[i] != 3 && numeros[i] != 0)
        {
            printf("%d ", numeros[i]);
        }
    }

    return 0;
}