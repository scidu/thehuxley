#include <stdio.h>

int qnt_turnos(int v, int d)
{
    if (v % d == 0)
    {
        return v / d;
    }
    else
    {
        return (v / d) + 1;
    }
}
int batalha(int v1, int v2, int d1, int d2)
{
    if (qnt_turnos(v2, d1) <= qnt_turnos(v1, d2))
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

void loop(int n, int i)
{
    if (n == i)
    {
        return;
    }

    int v1, v2, d1, d2;
    scanf("%d %d %d %d", &v1, &v2, &d1, &d2);
    i = i + 1;

    if (batalha(v1, v2, d1, d2) == 1)
    {
        printf("Clodes\n");
    }
    else
    {
        printf("Bezaliel\n");
    }
    loop(n, i);
}

int main()
{

    int n, i;
    scanf("%d", &n);
    loop(n, 0);
    return 0;
}