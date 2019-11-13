#include <stdio.h>

int main()
{
    double salario, comp, maxcomp, emprestimo;

    scanf("%lf%lf", &salario, &comp);

    maxcomp = (salario / 100) * 30;

    if (comp >= maxcomp)
    {
        printf("0.00");
    }
    else
    {
        printf("%.2lf", maxcomp - comp);
    }

    return 0;
}