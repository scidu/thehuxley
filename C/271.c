#include <stdio.h>

int main()
{
    double pi, r, rm, a;
    pi = 3.14159;

    scanf("%lf", &r);

    rm = r / 100;

    a = pi * (rm * rm);

    printf("Area = %.4lf\n", a);
    return 0;
}