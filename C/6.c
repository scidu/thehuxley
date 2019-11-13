#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, delta;

    scanf("%lf%lf%lf", &a, &b, &c);

    if (a == 0)
    {
        printf("NEESG");
    }
    else
    {
        delta = pow(b, 2) - 4 * a * c;
        if (delta < 0)
        {
            printf("NRR");
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("%.2lf\n%.2lf", x1, x2);
        }
    }

    return 0;
}