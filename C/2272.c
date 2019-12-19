#include <stdio.h>

int main()
{
    int linhas, colunas, l, c, des, resta = 0;

    scanf("%d%d", &linhas, &colunas);

    int celulas[linhas][colunas];

    for (l = 0; l < linhas; l++) //Le o array
    {
        for (c = 0; c < colunas; c++)
        {
            scanf("%d", &celulas[l][c]);
        }
    }

    scanf("%d", &des);

    if (linhas % 2 == 0)
    {
        for (l = 0; l < linhas; l++) //Percorre o array com linhas sendo par, se tiver valor 1 e ainda poder destruir, altera para 0, e decrementa des
        {
            for (c = 0; c < colunas && des != 0; c++)
            {
                if (celulas[l][c])
                {
                    celulas[l][c] = 0;
                    des--;
                }
            }
        }
    }
    else
    {
        for (c = 0; c < colunas; c++) //Percorre o array com linhas sendo impar, se tiver valor 1 e ainda poder destruir, altera para 0, e decrementa des
        {
            for (l = 0; l < linhas && des != 0; l++)
            {
                if (celulas[l][c])
                {
                    celulas[l][c] = 0;
                    des--;
                }
            }
        }
    }

    for (l = 0; l < linhas; l++) //Percorre o array e verifica se restou células
    {
        for (c = 0; c < colunas; c++)
        {
            if (celulas[l][c])
            {
                resta++;
            }
        }
    }

    for (l = 0; l < linhas; l++) //Percorre o array e imprime
    {
        for (c = 0; c < colunas; c++)
        {
            printf("%d", celulas[l][c]);
            if (c != colunas - 1)
            {
                printf(" ");
            }
                }
        printf("\n");
    }

    printf("%d %d", des, resta);

    return 0;
}