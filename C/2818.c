#include <stdio.h>

int main()
{
    float a;
    printf("Digite o pH da solucao:\n");
    scanf("%f", &a);
    if (a >= 1.0 && a < 7.0)
    {
        printf("Solucao acida");
    }
    else if (a > 7.0 && a <= 14.0)
    {
        printf("Solucao basica");
    }
    else if (a == 7.0)
    {
        printf("Solucao neutra");
    }
    else
    {
        printf("Valor do pH deve estar entre 0 e 14");
    }
    return 0;
}