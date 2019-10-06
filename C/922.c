#include <stdio.h>
#include <math.h>

int main()
{
    float s, a, t;
    scanf("%f", &s);
    if (s <= 280.00)
    {
        a = (s / 100) * 20;
        printf("%.2f", (s + a));
    }
    else if (s > 280.00 && s <= 700.00)
    {
        a = (s / 100) * 15;
        printf("%.2f", (s + a));
    }
    else if (s > 700.00 && s <= 1500.00)
    {
        a = (s / 100) * 10;
        printf("%.2f", (s + a));
    }
    else if (s > 1500.00)
    {
        a = (s / 100) * 5;
        printf("%.2f", (s + a));
    }

    return 0;
}