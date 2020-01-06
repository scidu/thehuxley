#include <stdio.h>

int main()
{
    int x, y, z;
    int i;

    scanf("%d%d%d", &x, &y, &z);

    int array[y];
    for (i = 0; i < y; i++)
    {
        array[i] = 0;
    }

    array[0] = 1;

    for (i = 1; array[i - 1] + z <= y; i++)
    {
        array[i] = array[i - 1] + z;
    }

    for (i = 0; i < y; i++)
    {
        if (array[i] != 0)
        {
            printf("%d", array[i]);

            if ((i + 1) == x || (i + 1) % x == 0)
            {
                printf("\n");
            }
            else
            {
                printf(" ");
            }
        }
    }

    return 0;
}