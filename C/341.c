#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        int dif, i2;
        double valori, valorf;

        scanf("%d%lf", &dif, &valori);

        if (valori <= 45)
        {
            valorf = valori;
        }
        else
        {
            if (dif == 0)
            {
                for (i2 = 0; i2 < 3; i2++)
                {
                    if (valori <= 100)
                    {
                        valori = valori - ((valori * 0.25) / 2);
                    }
                    else
                    {
                        valori = valori - (valori * 0.25);
                    }
                }
            }
            if (dif == 1)
            {
                for (i2 = 0; i2 < 3; i2++)
                {
                    if (valori <= 100)
                    {
                        valori = valori - ((valori * 0.20) / 2);
                    }
                    else
                    {
                        valori = valori - (valori * 0.2);
                    }
                }
            }
            if (dif == 2)
            {
                for (i2 = 0; i2 < 3; i2++)
                {
                    if (valori <= 100)
                    {
                        valori = valori - ((valori * 0.18) / 2);
                    }
                    else
                    {
                        valori = valori - (valori * 0.18);
                    }
                }
            }
            if (dif == 3)
            {
                for (i2 = 0; i2 < 3; i2++)
                {
                    if (valori <= 100)
                    {
                        valori = valori - ((valori * 0.15) / 2);
                    }
                    else
                    {
                        valori = valori - (valori * 0.15);
                    }
                }
            }
            if (dif == 4)
            {
                for (i2 = 0; i2 < 3; i2++)
                {
                    if (valori <= 100)
                    {
                        valori = valori - ((valori * 0.12) / 2);
                    }
                    else
                    {
                        valori = valori - (valori * 0.12);
                    }
                }
            }
            if (dif == 5)
            {
                for (i2 = 0; i2 < 3; i2++)
                {
                    if (valori <= 100)
                    {
                        valori = valori - ((valori * 0.10) / 2);
                    }
                    else
                    {
                        valori = valori - (valori * 0.10);
                    }
                }
            }
            valorf = valori;
            if (valorf < 45)
            {
                valorf = 45;
            }
        }

        printf("Jogo[%d] = R$%.2lf\n", i, valorf);
    }

    return 0;
}