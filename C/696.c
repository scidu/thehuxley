#include <stdio.h>

int main()
{
    int numeros[10];
    int i, n, qnt = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &numeros[i]);
    }

    scanf("%d", &n);

    for (i = 0; i < 10; i++)
    {
        if (numeros[i] == n)
        {
            qnt++;
        }
    }

    printf("%d", qnt);

    return 0;
}