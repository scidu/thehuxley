#include <stdio.h>

int main()
{
    double c, t, a, l, e, chance;

    chance = 100;

    scanf("%lf%lf%lf%lf%lf", &c, &t, &a, &l, &e);

    if (c)
    {
        if (t == 1)
        {
            chance = chance + 33.21;
        }
        else if (t == 2)
        {
            chance = chance + 10.51;
        }
        else if (t == 3)
        {
            chance = chance - 20.7;
        }

        if (a > 40000)
        {
            chance = chance + (a * 0.0008);
        }
        else
        {
            chance = chance - (a * 0.0008);
        }

        if (e > 0)
        {
            chance = chance + (e * 2.7);
        }
        else
        {
            chance = chance - (e * 1.8);
        }
    }
    else
    {
        if (a > 45000)
        {
            chance = chance - (a * 0.0003);
        }
        else
        {
            chance = chance - (a * 0.0001);
        }

        if (e > 0)
        {
            chance = chance + (e * 5.2);
        }
        else
        {
            chance = chance - (e * 1.5);
        }

        if (t == 2 || t == 3)
        {
            chance = 0;
        }
        else if (t == 1)
        {
            chance = chance - 10.87;
        }
    }

    chance = chance - (l * 2.7);

    if (chance < 0)
    {
        printf("A chance de vitoria do flamengo e de 0.00\n");
    }
    else if (chance >= 0 && chance <= 100)
    {
        printf("A chance de vitoria do flamengo e de %.2lf\n", chance);
    }
    else if (chance > 100)
    {
        printf("A chance de vitoria do flamengo e de 100.00\n");
    }
    return 0;
}