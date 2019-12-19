#include <stdio.h>
#include <math.h>

int main()
{
    int i, e;
    float s, d, x, y;
    int S;
    scanf("%d", &S);
    s = 0;
    for (i = 1; i <= S; i++)
    {
        e = i - 1;
        y = pow(2, e);
        if ((i % 2) == 0)
        {
            x = (3 * i) / 2;
            d = y / x;
        }
        else
        {
            x = i;
            d = x / y;
        }
        s = s + d;
    }
    printf("S: %.2f", s);
    return 0;
}