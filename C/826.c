#include <stdio.h>

int main()
{
    float m, cm;

    printf("Insira um valor em metros:\n");
    scanf("%f", &m);

    cm = m*100;

    printf("Resultado: %.1f", cm);
    return 0;
}