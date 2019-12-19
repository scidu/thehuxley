#include <stdio.h>

int main()
{
    int n, m;
    int i, j;
    int ma[1000][1000];

    float t, a, b, c, d, x, y;

    scanf("%d%d", &n, &m);
    while (n != 0 && m != 0)
    {
        t = a = b = c = d = x = y = 0;

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                ma[i][j] = i * m + j + 1;
                t += ma[i][j];
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; ++j)
            {
                if (j == 0)
                    a += ma[i][j];
                if (j == m - 1)
                    b += ma[i][j];
                if (i == 0)
                    c += ma[i][j];
                if (i == n - 1)
                    d += ma[i][j];
                if (i == j)
                    x += ma[i][j];
                if (m - n == j - i)
                    y += ma[i][j];
            }
        }

        printf("%.2f\n", (t - (x + y) + (a * b) - (c * d)) / (n * m));
        scanf("%d%d", &n, &m);
    }

    return 0;
}
