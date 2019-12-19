#include <stdio.h>

int main()
{
    double alturas[4], aux;
    int i, i2;

    for (i = 0; i < 4; i++)
    {
        scanf("%lf", &alturas[i]);
    }

    for (i = 0; i < 4; i++)
    {
        for (i2 = i + 1; i2 < 4; i2++)
        {
            if (alturas[i] > alturas[i2])
            {
                aux = alturas[i];
                alturas[i] = alturas[i2];
                alturas[i2] = aux;
            }
        }
    }

    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n", alturas[0], alturas[2], alturas[3], alturas[1]);

    return 0;
}