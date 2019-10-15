#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main()
{
    double raio, area, volume;

    scanf("%lf", &raio);

    area = 4 * PI * pow(raio, 2);
    volume = (4 * PI * pow(raio, 3)) / 3;

    printf("%.2lf\n%.2lf", area, volume);

    return 0;
}