#include <stdio.h>

int main()
{
    int primos[5];
    int i, i2, aux;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &primos[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (i2 = i + 1; i2 < 5; i2++)
        {
            if (primos[i] > primos[i2])
            {
                aux = primos[i];
                primos[i] = primos[i2];
                primos[i2] = aux;
            }
        }
    }

    printf("%d\n%d\n%d", primos[0], primos[2], primos[4]);

    return 0;
}
