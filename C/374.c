#include <stdio.h>

int main()
{
    double salario, bonus;

    scanf("%lf", &salario);

    bonus = salario * 0.75;

    if (bonus < 2000)
    {
        printf("ARGENTINA");
    }
    else if (bonus >= 2000 && bonus <= 3000)
    {
        printf("ESPANHA");
    }
    else if (bonus > 3000)
    {
        printf("ALEMANHA");
    }

    return 0;
}