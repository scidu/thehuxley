#include <stdio.h>

int caixa(char tam)
{
    if (tam == 'G' || tam == 'g')
    {
        return 16;
    }
    else if (tam == 'P' || tam == 'p')
    {
        return 10;
    }
}

int main()
{
    int qnt, i, bebidas, totalcap = 0;
    char tam;

    for (i = 1; i <= 7; i++)
    {
        scanf("%d %c", &qnt, &tam);
        totalcap = totalcap + qnt * caixa(tam);
    }

    bebidas = (totalcap / 7) * 2;
    printf("%d\n%d", totalcap, bebidas);

    return 0;
}