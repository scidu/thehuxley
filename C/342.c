#include <stdio.h>

int main()
{
    int n, divisor, d3 = 0;
    divisor = 1;

    scanf("%d", &n);

    while (divisor <= n)
    {
        if ((n / divisor) % 3 == 0)
        {
            d3++;
        }
        divisor++;
    }

    printf("%d", d3);

    return 0;
}