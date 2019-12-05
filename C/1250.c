#include <stdio.h>

int turnos(int vida, int dano)
{
    if (vida % dano == 0)
    {
        return vida / dano;
    }
    else
    {
        return (vida / dano) + 1;
    }
}

int batalha(int v1, int v2, int d1, int d2)
{
    if (turnos(v2, d1) <= turnos(v1, d2))
    {
        return 1;
    }
    d1 = d1 + 50;

    if (v1 - d2 <= 0)
    {
        return 2;
    }
    v1 = v1 - d2;
    return batalha(v1, v2, d1, d2);
}

int main()
{
    int n, i, v1, v2, d1, d2;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d%d%d%d", &v1, &v2, &d1, &d2);

        if (batalha(v1, v2, d1, d2) == 1)
        {
            printf("Clodes\n");
        }
        else
        {
            printf("Bezaliel\n");
        }
    }

    return 0;
}