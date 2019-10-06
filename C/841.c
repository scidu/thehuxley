#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    float a, b, c, m;
    int q;
    q = 0;
    scanf("%f%f%f", &a, &b, &c);
    m = (a + b + c) / 3;
    if (a > m)
    {
        q++;
    }
    if (b > m)
    {
        q++;
    }
    if (c > m)
    {
        q++;
    }
    printf("%d", q);
    return 0;
}