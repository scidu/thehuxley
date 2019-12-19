#include <stdio.h>

int main()
{
    int i, j, i1, j1;

    while ((scanf("%d", &i) == 1) && (scanf("%d", &j) == 1))
    {
        i1 = i;
        j1 = j;

        int n, x, y, atual, maior, aux;

        c = 0;
        maior = c;
        if (i > j)
        {
            aux = j;
            j = i;
            i = aux;
        }
        for (y = j; y >= i; y--)
        {
            n = y;
            c = 0;
            while (n != 1)
            {
                if ((n % 2) == 0)
                {
                    x = n / 2
                }
                else
                {
                    x = (3 * n) + 1;
                }
                n = x;
                c++;
            }
            if (n == 1)
            {
                c++;
            }
        }

        if (atual > maior)
        {
            maior = atual;
        }
        printf("%d %d %d\n", i, j, maior);
    }

    return 0;
}