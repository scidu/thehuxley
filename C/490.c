#include <stdio.h>

int main()
{
    double arvore, qntenf[3], valorenf[3], soma = 0, cada;
    int i;

    scanf("%lf", &arvore);

    for (i = 0; i < 3; i++)
    {
        scanf("%lf%lf", &qntenf[i], &valorenf[i]);
    }

    for (i = 0; i < 3; i++)
    {
        soma = soma + (qntenf[i] * valorenf[i]);
    }

    soma = soma + arvore;

    cada = soma / 21;

    printf("%.2lf\n%.2lf", soma, cada);

    return 0;
}