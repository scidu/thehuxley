#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    float a, b, c, d, e, f, g;
    int q;
    q = 0;
    scanf("%f%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f, &g);
    if (a >= 8)
    {
        q++;
    }
    if (b >= 8)
    {
        q++;
    }
    if (c >= 8)
    {
        q++;
    }
    if (d >= 8)
    {
        q++;
    }
    if (e >= 8)
    {
        q++;
    }
    if (f >= 8)
    {
        q++;
    }
    if (g >= 8)
    {
        q++;
    }
    if (q < 3)
    {
        printf("Desempenho ruim");
    }
    if (q == 3 || q == 4)
    {
        printf("Desempenho razoavel");
    }
    if (q > 5)
    {
        printf("Desempenho otimo");
    }
	return 0;
}