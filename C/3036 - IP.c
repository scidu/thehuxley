#include <stdio.h>
#include <math.h>

int primo(int n)
{
    int divisor, achou;
    divisor = 2;
    achou = 0;
    if (n == 1 || n == 0 || n == 2)
    {
        return 0;
    }
    else
    {
        while (divisor < n && !achou)
        {
            if (n % divisor == 0)
            {
                achou = 1;
            }
            else
            {
                divisor++;
            }
        }
        if (achou)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int base2(int n)
{
    float lg;
    while (n != 0)
    {
        lg = log10(n) / log10(2);

        if (lg > (int)lg)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

void respartida(int n, int p)
{
    int i, dadofabio, dadoaya, turnos, posicaofabio = 0, posicaoaya = 0, fabiopassou = 0, ayapassou = 0;
    char ganhador;
    scanf("%d", &turnos);

    for (i = 0; i < turnos; i++)
    {
        scanf("%d%d", &dadofabio, &dadoaya);

        posicaofabio = posicaofabio + dadofabio;
        posicaoaya = posicaoaya + dadoaya;

        if (posicaofabio > n)
        {
            fabiopassou++;
            posicaofabio = 0;
        }
        else if (posicaoaya > n)
        {
            ayapassou++;
            posicaoaya = 0;
        }
        else
        {
            if (base2(posicaofabio) == 1)
            {
                posicaofabio = posicaofabio + 2;
            }
            if (base2(posicaoaya) == 1)
            {
                posicaoaya = posicaoaya + 2;
            }
            if (primo(posicaofabio) == 1)
            {
                posicaofabio = posicaofabio - 2;
            }
            if (primo(posicaoaya) == 1)
            {
                posicaoaya = posicaoaya - 2;
            }
        }
    }
    if (fabiopassou == ayapassou)
    {
        if (posicaofabio == posicaoaya)
        {
            ganhador = 'e';
        }
        else if (posicaofabio > posicaoaya)
        {
            ganhador = 'f';
        }
        else if (posicaofabio < posicaoaya)
        {
            ganhador = 'a';
        }
    }
    else if (fabiopassou > ayapassou)
    {
        ganhador = 'f';
    }
    else
    {
        ganhador = 'a';
    }

    if (ganhador == 'e')
    {
        printf("Partida %d : Houve um empate nas posicoes %d e %d", p, posicaofabio, posicaofabio);
    }
    else if (ganhador == 'f')
    {
        printf("Partida %d : Fabio venceu na posicao %d passando %d vezes pelo final do tabuleiro\n", p, posicaofabio, fabiopassou);
    }
    else if (ganhador == 'a')
    {
        printf("Partida %d : Ayalla venceu na posicao %d passando %d vezes pelo final do tabuleiro\n", p, posicaoaya, ayapassou);
    }
}

int main()
{
    int p, n, i, pos, pass;

    scanf("%d%d", &p, &n);

    for (i = 1; i <= p; i++)
    {
        respartida(n, i);
    }

    return 0;
}