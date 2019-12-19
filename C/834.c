#include <stdio.h>

int main()
{
    int i, i2, aux, t = 4, senha;
    int dicas[t];

    for (i = 0; i < t; i++)
    {
        scanf("%d", &dicas[i]);
    }

    for (i = 0; i < t; i++)
    {
        for (i2 = i + 1; i2 < t; i2++)
        {
            if (dicas[i] > dicas[i2])
            {
                aux = dicas[i];
                dicas[i] = dicas[i2];
                dicas[i2] = aux;
            }
        }
    }

    printf("%d%d", dicas[0] + dicas[1], dicas[0] + dicas[2]);

    return 0;
}
