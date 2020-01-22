#include <stdio.h>

int main()
{
    int i, j, l, c;
    scanf("%d%d", &l, &c);
    int mapa[l][c], movi, x, y;

    for (i = 0; i < l; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            scanf("%d", &mapa[i][j]);
        }
    }

    scanf("%d ", &movi);
    char movimento[movi];
    for (i = 0; i < movi; ++i)
    {
        scanf("%c ", &movimento[i]);
    }

    scanf("%d%d", &x, &y);

    for (i = 0; i < movi; ++i)
    {
        if (movimento[i] == 'B')
        {
            if (x + 1 == l || mapa[x + 1][y] == 0)
                continue;
            else
                x++;
        }
        if (movimento[i] == 'C')
        {
            if (x == 0 || mapa[x - 1][y] == 0)
                continue;
            else
                x--;
        }
        if (movimento[i] == 'D')
        {
            if (y + 1 == c || mapa[x][y + 1] == 0)
                continue;
            else
                y++;
        }
        if (movimento[i] == 'E')
        {
            if (y == 0 || mapa[x][y - 1] == 0)
                continue;
            else
                y--;
        }
    }

    printf("(%d,%d)\n\n", x, y);
    return 0;
}