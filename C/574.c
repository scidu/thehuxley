#include <stdio.h>

int main()
{
    double cdolar, alicms, vproduto, vfrete;

    double vprodutofinal, fretef = 0, freteproduto, imposto_imp, icms, totalimp, total;

    scanf("%lf%lf%lf%lf", &cdolar, &alicms, &vproduto, &vfrete);

        if (vproduto < 2500)
    {
        fretef = vfrete * cdolar;
    }

    alicms = alicms / 100;
    vproduto = cdolar * vproduto;
    vfrete = cdolar * vfrete;
    freteproduto = vproduto + vfrete;
    imposto_imp = (vproduto + fretef) * 0.6;
    vprodutofinal = (vproduto + fretef + imposto_imp) / (1 - alicms);
    icms = vprodutofinal * alicms;
    totalimp = icms + imposto_imp;
    total = vproduto + vfrete + totalimp;

    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n", cdolar, vproduto, vfrete, freteproduto, imposto_imp, icms, totalimp, total);

    if (fretef != 0)
    {
        printf("Impostos calculados com o frete");
    }
    else
    {
        printf("Impostos calculados sem o frete");
    }
    return 0;
}