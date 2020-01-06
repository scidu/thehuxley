#include <stdio.h>

int main()
{
    double v, credito = 0, debito = 0, saldo = 0, array[100][2];
    int l, c;

    for (l = 0; l < 100; l++) // Le e armazena a matriz;
    {
        for (c = 0; c < 2; c++)
        {
            scanf("%lf", &v);
            if (v == -1)
            {
                break;
            }
            else
            {
                array[l][c] = v;
            }
        }
        if (v == -1)
        {
            break;
        }
    }

    for (l = 0; l < 100; l++)
    {
        if (array[l][0] == 1)
        {
            credito += array[l][1];
            saldo += array[l][1];
        }
        else
        {
            debito += array[l][1];
            saldo -= array[l][1];
        }
    }

    printf("Creditos: R$ %.2lf\nDebitos: R$ %.2lf\nSaldo: R$ %.2lf", credito, debito, saldo);

    return 0;
}