#include <stdio.h>

int main()
{
    int n, i, multas = 0;
    double valor = 0;

    scanf("%d", &n);
    while (n != 999)
    {
        if (n > 2)
        {
            multas++;
            valor = valor + ((n-2) * 12.89);
        }
        scanf("%d", &n);
    }

    printf("%.2lf\n%d", valor, multas);

    return 0;
}