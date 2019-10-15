#include <stdio.h>

int main()
{
    double basemenor, basemaior, altura, area;

    scanf("%lf%lf%lf", &basemenor, &basemaior, &altura);

    area = ((basemenor + basemaior) * altura) / 2;

    printf("%.1lf", area);

    return 0;
}