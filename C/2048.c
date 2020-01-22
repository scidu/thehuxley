#include <stdio.h>

int corrigi(int n, int aposta[n][10], int resultado[6])
{
    int i, j, k, acertos, ganhadores = 0;

    for (i = 0; i < n; i++)
    {
        acertos = 0;
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 10; k++)
            {
                if (resultado[j] == aposta[i][k])
                {
                    acertos++;
                }
            }
        }
        if (acertos == 6)
        {
            ganhadores++;
        }
    }

    return ganhadores;
}

int main()
{
    int n, i, j, ganhadores = 0;
    char c;
    int resultado[6];

    scanf("%d", &n);

    int aposta[n][10];

    for (i = 0; i < n; i++) //Definir a matriz para -1
    {
        for (j = 0; j < 10; j++)
        {
            aposta[i][j] = -1;
        }
    }

    for (i = 0; i < n; i++) //Ler as apostas e armazena na matriz ignorando ',' e parando em caso de quebra de linha
    {
        for (j = 0; j < 10; j++)
        {
            scanf("%d", &aposta[i][j]);
            scanf("%c", &c);
            if (c == '\n')
            {
                break;
            }
        }
    }

    for (i = 0; i < 6; i++) //Ler o resultado e armazena no array;
    {
        scanf("%d", &resultado[i]);
    }

    ganhadores = corrigi(n, aposta, resultado);

    printf("Total de ganhadores: %d", ganhadores);

    return 0;
}