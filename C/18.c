#include <stdio.h>

int main()
{
    int a, b, c, menor;

    scanf("%d%d%d", &a, &b, &c);

    menor = c;

    if (a < menor)
    {
        menor = a;
    }
    if (b < menor)
    {
        menor = b;
    }
    printf("%d", menor);

    return 0;
}