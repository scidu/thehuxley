#include <stdio.h>

int main()
{
    double problemas, resolvidos, pres;

    scanf("%lf%lf", &problemas, &resolvidos);

    pres = (resolvidos / problemas) * 100;

    if (pres < 20)
    {
        printf("%.2lf%% 4.40%% Pessimo", pres);
    }
    else if (pres >= 20 && pres < 40)
    {
        printf("%.2lf%% 31.65%% Ruim", pres);
    }
    else if (pres >= 40 && pres < 60)
    {
        printf("%.2lf%% 56.82%% Bom", pres);
    }
    else if (pres >= 60 && pres < 80)
    {
        printf("%.2lf%% 80.00%% Muito Bom", pres);
    }
    else if (pres >= 80 && pres <= 100)
    {
        printf("%.2lf%% 94.00%% Excelente", pres);
    }

    return 0;
}