#include <stdio.h>

int main()
{
    int p, n, i;
    p = 1;

    scanf("%d", &n);

    for (size_t i2 = 0; i2 < n; i2++)
    {
        for (i = 1; i <= i2; i++)
        {
            printf("%d ", i);
        }
        if (i == i2 + 1)
        {
            printf("%d", i);
        }
        
        printf("\n");
    }

    return 0;
}