#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    int array[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d", array[i]);
        if (i != 0)
        {
            printf(" ");
        }
    }

    return 0;
}