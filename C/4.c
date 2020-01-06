#include <stdio.h>

int main()
{
    int n, i, i2, aux, j = 0, m = 0, sj = 0, sm = 0;

    scanf("%d", &n);

    int array[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            j++;
        }
        else
        {
            m++;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (i2 = i + 1; i2 < n; i2++)
        {
            if (array[i] == array[i2])
            {
                array[i2] = 0;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            sj += array[i];
        }
        else
        {
            sm += array[i];
        }
    }

    printf("%d\n%d\n", j, m);

    if (sj > sm)
    {
        printf("%d", sj);
    }
    else
    {
        printf("%d", sm);
    }

    return 0;
}