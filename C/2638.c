#include <stdio.h>

int main(){
    float a;
    printf("Digite o pH da solucao:\n");
    scanf("%f", &a);
    if (a >= 1.0 && a < 7.0)
    {
        printf("Essa solucao e acida.");
    }
    else if (a > 7.0 && a <= 14.0)
    {
        printf("Essa solucao e basica.");
    }
    else if (a == 7.0)
    {
        printf("Essa solucao e neutra.");
    }
    else
    {
        printf("Valor deve estar entre 0 e 14.");
    }
    return 0;
}