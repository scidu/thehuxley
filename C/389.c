#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    float a, b, c, d, e, f;
    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
    if (f > e && e > d && d > c && c > b && b > a)
    {
        printf("Ganha brinquedo");
    }
    else
    {
        printf("Sem brinquedo");
    }
    return 0;
}