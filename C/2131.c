#include <stdio.h>

int main()
{
    int p, e, l, c;

    scanf("%d%d", &p, &e);

    int votos[e][p];

    for (l = 0; l < e; l++)
    {
        for (c = 0; c < p; c++)
        {
            scanf("%d", &votos[l][c]);
        }
    }

    for (c = 0; c < p; c++)
    {
        int voto = 0;
        for (l = 0; l < e; l++)
        {
            voto += votos[l][c];
        }
        printf("Princesa %d: %d voto(s)\n", c + 1, voto);
    }

    return 0;
}