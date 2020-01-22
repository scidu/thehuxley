#include <stdio.h>

int main()
{
    int i, j, casa, jogador, rodadas;
    scanf("%d %d %d", &casa, &jogador, &rodadas);
    int tabuleiro[casa], posicao[1000] = {0};

    for (i = 0; i < casa; i++)
    {
        scanf("%d", &tabuleiro[i]);
    }

    for (i = 0; i < rodadas; i++)
    {
        for (j = 0; j < jogador; j++)
        {
            int dado, posicaoAtual = posicao[j];
            scanf("%d", &dado);
            posicaoAtual = (posicaoAtual + dado) % casa;
            posicaoAtual = (posicaoAtual + tabuleiro[posicaoAtual]) % casa;
            if (posicaoAtual < 0)
            {
                posicaoAtual = posicaoAtual + casa;
            }
            posicao[j] = posicaoAtual;
        }
    }

    for (i = 0; i < jogador; i++)
    {
        printf("%d\n", posicao[i]);
    }
}