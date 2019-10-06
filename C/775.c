#include <stdio.h>

int main()
{
    double massa, altura, imc;

    scanf("%lf\n%lf", &massa, &altura);

    imc = massa / (altura * altura);

    if (imc < 18.5)
    {
        printf("%.2lf MAGREZA", imc);
    }
    else if (imc >= 18.5 && imc <= 24.9)
    {
        printf("%.2lf SAUDAVEL", imc);
    }
    else if (imc >= 25 && imc <= 29.9)
    {
        printf("%.2lf SOBREPESO", imc);
    }
    else if (imc > 30)
    {
        printf("%.2lf OBESIDADE", imc);
    }

    return 0;
}