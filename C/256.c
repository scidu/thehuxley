#include <stdio.h>

int main()
{
    int tamanho, i;

    scanf("%d", &tamanho);

    int array1[tamanho], array2[tamanho], arrayf[tamanho * 2];

    for (i = 0; i < tamanho * 2; i += 2)
    {
        scanf("%d", &array1[i]);
    }
    for (i = 1; i < tamanho * 2; i += 2)
    {
        scanf("%d", &array2[i]);
    }

    for (i = 0; i < tamanho * 2; i += 2)
    {
        arrayf[i] = array1[i];
    }
    for (i = 1; i < tamanho * 2; i += 2)
    {
        arrayf[i] = array2[i];
    }

    for (i = 0; i < tamanho * 2; i++)
    {
        printf("%d\n", arrayf[i]);
    }

    return 0;
}