#include <stdio.h>

int main()
{
    int l, c, i, j;
    double custoam0 = 0, custoam1 = 0, lucroam0 = 0, lucroam1 = 0;
    double prod[12][2];
    double val[2][2];
    double m0[12][2], m1[12][2];

    for (l = 0; l < 12; l++) // Le a producao
    {
        for (c = 0; c < 2; c++)
        {
            scanf("%lf", &prod[l][c]);
        }
    }

    for (l = 0; l < 2; l++) // Le os valores de custo e lucro
    {
        for (c = 0; c < 2; c++)
        {
            scanf("%lf", &val[l][c]);
        }
    }

    for (i = 0; i < 2; i++) // Calcula a matriz m0
    {
        for (j = 0; j < 12; j++)
        {
            m0[j][i] = prod[j][0] * val[0][i];
        }
    }

    for (i = 0; i < 2; i++) // Calcula a matriz m1
    {
        for (j = 0; j < 12; j++)
        {
            m1[j][i] = prod[j][1] * val[1][i];
        }
    }

    for (i = 0; i < 12; i++) // Calcula o custo anual do motor 0
    {
        custoam0 += m0[i][0];
    }
    for (i = 0; i < 12; i++) // Calcula o lucro anual do motor 0
    {
        lucroam0 += m0[i][1];
    }

    for (i = 0; i < 12; i++) // Calcula o custo anual do motor 1
    {
        custoam1 += m1[i][0];
    }
    for (i = 0; i < 12; i++) // Calcula o lucro anual do motor 1
    {
        lucroam1 += m1[i][1];
    }

    for (i = 0; i < 12; i++)
    {
        printf("Motor[0], Mes[%d], custo=[%.2lf], lucro=[%.2lf]\n", i + 1, m0[i][0], m0[i][1]);
    }
    for (i = 0; i < 12; i++)
    {
        printf("Motor[1], Mes[%d], custo=[%.2lf], lucro=[%.2lf]\n", i + 1, m1[i][0], m1[i][1]);
    }

    printf("Motor[0], anual, custo=[%.2lf], lucro=[%.2lf]", custoam0, lucroam0);
    printf("\n");
    printf("Motor[1], anual, custo=[%.2lf], lucro=[%.2lf]", custoam1, lucroam1);

    return 0;
}