#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    float salario, reajustado;
    scanf("%f", &salario);
    if (salario < 1000)
    {
        reajustado = salario + ((salario * 30) / 100);
        printf("%.2f", reajustado);
    }
    if (salario >= 1000 && salario <= 2000)
    {
        reajustado = salario + ((salario * 10) / 100);
        printf("%.2f", reajustado);
    }
    if (salario > 2000)
    {
        printf("%.2f", salario);
    }
    return 0;
}