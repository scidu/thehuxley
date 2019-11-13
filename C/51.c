#include <stdio.h>

int main()
{
    double cod, qnt, p1, p2, p3, p4, tbruto, tliquido;

    p1 = 5.3;
    p2 = 6;
    p3 = 3.2;
    p4 = 2.5;

    scanf("%lf%lf", &cod, &qnt);

    if (cod == 1)
    {
        cod = p1;
    }
    else if (cod == 2)
    {
        cod = p2;
    }
    else if (cod == 3)
    {
        cod = p3;
    }
    else if (cod == 4)
    {
        cod = p4;
    }
    
    tbruto = qnt * cod;

    if (qnt >= 15 || tbruto >= 40)
    {
        tliquido = tbruto - ((tbruto / 100) * 15);
    }
    else
    {
        tliquido = tbruto;
    }

    printf("R$ %.2lf", tliquido);

    return 0;
}