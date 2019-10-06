#include <stdio.h>

int main()
{
    float d, k, c, t;
    scanf("%f\n%f", &d, &k);
    c = d * 100;
    if (k > c)
    {
        int r;
        r = k - c;
        t = (d * 90) + (r * 12);
        printf("%.2f", t);
    }
    else
    {
        printf("%.2f", d * 90);
    }
    return 0;
}