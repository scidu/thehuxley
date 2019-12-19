#include <stdio.h>

int main()
{
    double normal, menor, desconto;
    int i, qnt = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%lf%lf", &normal, &menor);

        desconto = 0.2 * normal;

        if (menor <= (normal - desconto))
        {
            qnt++;
        }
    }

    printf("%d", qnt);

    return 0;
}