#include <stdio.h>

int main()
{
    int x, y, i;

    scanf("%d%d", &x, &y);

    int array[y];

    for (i = 0; i < y; i++)
    {
        array[i] = i + 1;
    }

    for (i = 0; i < y; i++)
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

    return 0;
}