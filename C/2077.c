#include <stdio.h>

int main()
{
    int n, i, tentativa = 0;

    scanf("%d", &n);
    if (n < 6)
    {
        printf("Falso");
    }
    else
    {
        for (i = 0; i <= n; i++)
        {
            tentativa = i * (i + 1) * (i + 2);

            if (tentativa == n)
            {
                printf("%d * %d * %d = %d\nVerdadeiro", i, (i + 1), (i + 2), n);
                break;
            }
            if (tentativa > n)
            {
                printf("Falso");
                break;
            }
        }
    }

    return 0;
}