#include <stdio.h>

int main()
{
	int n, i, i2, aux;

    scanf("%d", &n);

    int array[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (i2 = i + 1; i2 < n; i2++)
        {
            if (array[i] > array[i2])
            {
                aux = array[i];
                array[i] = array[i2];
                array[i2] = aux;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("[%d]", array[i]);
    }

	return 0;
}