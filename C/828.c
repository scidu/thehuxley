#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    float vh, hm;
    printf("Informe quanto ganha por hora:");
    scanf("%f", &vh);
    printf("\nInforme a quantidade mensal de trabalho:");
    scanf("%f", &hm);
    printf("\nResultado: %.1f", (vh * hm));
    return 0;
}