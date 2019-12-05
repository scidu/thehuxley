#include <stdio.h>

int mdc(int a, int b)
{
    int aux, resto;

    if (b > a)
    {
        aux = a;
        a = b;
        b = aux;
    }

    resto = a % b;

    while (resto != 0)
    {
        a = b;
        b = resto;
        resto = a % b;
    }

    return b;
}

int main()
{
    int n, i, maior1 = 0, maior2 = 0, mdcf;
    int numeros[1000];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (numeros[i] > maior1)
        {
            maior1 = numeros[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        if (numeros[i] > maior2 && numeros[i] != maior1)
        {
            maior2 = numeros[i];
        }
    }

    mdcf = mdc(maior1, maior2);

    printf("%d", mdcf);

    return 0;
}