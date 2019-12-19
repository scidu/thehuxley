#include <stdio.h>

int main()
{
    int n, c, s, e, d = 0, p = 0, i;

    scanf("%d%d", &n, &c);

    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &s, &e);

        d = d - s;

        d = d + e;

        if (d > c)
        {
            p++;
        }
    }

    if (p)
    {
        printf("S");
    }
    else
    {
        printf("N");
    }

    return 0;
}