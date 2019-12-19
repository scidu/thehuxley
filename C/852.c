#include <stdio.h>
#include <math.h>

double mdc(double a, double b)
{
    double r;
    while (b != 0)
    {
        r = fmod(a, b);
        a = b;
        b = r;
    }
    return a;
}

double mmcn(int n, double numeros[n])
{
    double mmc = numeros[0];
    int i;
    for (i = 1; i < n; i++)
    {
        mmc = mmc * (numeros[i] / mdc(mmc, numeros[i]));
    }
    return mmc;
}

int main()
{
    int n, i;
    double tempo;

    scanf("%d", &n);

    double trans[n];

    for (i = 0; i < n; i++)
    {
        scanf("%lf", &trans[i]);
    }

    tempo = mmcn(n, trans);

    printf("%.1lf", tempo);

    return 0;
}