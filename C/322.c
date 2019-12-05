#include <stdio.h>

int main()
{
    int n, valor, pos, i;
    int array[1000] = {0};

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    valor = array[0];

    for (i = 0; i < n; i++)
    {
        if (array[i] < valor)
        {
            valor = array[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d", valor, pos);

    return 0;
}