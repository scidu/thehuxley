#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int i, j, i1, j1;
    int x;
    while ((scanf("%d", &i) == 1) && (scanf("%d", &j) == 1))
    {

        i1 = i;
        j1 = j;

        int n, x, y, c, cmax, aux;

        c = 0;
        cmax = c;
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
                    x = n / 2;
                }
                else
                {
                    x = (3 * n) + 1;
                }
                n = x;
                c++;
            }
            if (n == 1)
                c++;
            if (c > cmax)
            {
                cmax = c;
            }
        }

        printf("%d %d %d\n", i1, j1, cmax);
    }
    return 0;
}