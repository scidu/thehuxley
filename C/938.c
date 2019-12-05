#include <stdio.h>

int main()
{
    double n, neg = 0, i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um valor:\n");
        scanf("%lf", &n);
        if (n < 0)
        {
            neg++;
        }
    }

    printf("Foram digitados %.lf numeros negativos", neg);

    return 0;
}