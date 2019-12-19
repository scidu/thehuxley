#include <stdio.h>

int main()
{
    int L, C, l, c;

    scanf("%d%d", &L, &C);

    int matriz[L][C], transposta[C][L];

    for (l = 0; l < L; l++)
    {
        for (c = 0; c < C; c++)
        {
            scanf("%d", &matriz[l][c]);
        }
    }

    for (l = 0; l < C; l++)
    {
        for (c = 0; c < L; c++)
        {
            transposta[l][c] = matriz[c][l];
        }
    }

    for (c = 0; c < C; c++)
    {
        printf("| ");
        for (l = 0; l < L; l++)
        {
            printf("%d ", transposta[c][l]);
        }
        printf("|\n");
    }

    return 0;
}