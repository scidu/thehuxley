#include <stdio.h>

int main()
{
    int a, b, i, m = 0;

    scanf("%d%d", &a, &b);

    for (i = 49; i > 0; i--)
    {
        if (i % a == 0 && i % b == 0)
        {
            m++;
        }
    }

    printf("%d", m);

    return 0;
}