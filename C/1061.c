#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    float r1, r2, a, b;
    scanf("%f%f", &r1, &r2);
    a = 3.14 * pow(r1, 2);
    b = 3.14 * pow(r2, 2);

    if (a == b)
    {
        printf("Iguais");
    }

    if (a > b)
    {
        printf("Primeiro circulo");
    }

    if (b > a)
    {
        printf("Segundo circulo");
    }

    system("pause");
    return 0;
}