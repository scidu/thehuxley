#include <stdio.h>

int main()
{
	int dias, km;
    double bruto, final;

    scanf("%d%d", &dias, &km);

    bruto = (dias * 30) + (km * 0.01);
    final = bruto - (bruto/10);

    printf("%.2lf", final);

	return 0;
}