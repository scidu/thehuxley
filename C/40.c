#include <stdio.h>

int main()
{
	double gasto, total;

    scanf("%lf", &gasto);

    total = gasto + gasto/10;

    printf("%.2lf", total);

	return 0;
}