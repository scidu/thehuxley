#include <stdio.h>

int is_prime(int n) // Verifica se o numero e primo.
{
    int i;
    if (n == 1 || n == 0)
    {
        return 0;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}

int conta_principal(int n, int matriz[n][n]) // Verifica a quantidade de primos na diagonal principal.
{
    int l, c, primes = 0;

    for (l = 0; l < n; l++)
    {
        if (is_prime(matriz[l][l]) == 1)
        {
            primes++;
        }
    }

    return primes;
}

int conta_secundaria(int n, int matriz[n][n]) // Verifica a quantidade de primos na diagonal secundaria.
{
    int l, c = 0, primes = 0;

    for (l = n - 1; l >= 0; l--)
    {

        if (is_prime(matriz[l][c]) == 1)
        {
            primes++;
        }
        c++;
    }

    return primes;
}

int main()
{
    int p, i, l, c, fabio = 0, keke = 0;

    scanf("%d", &p);

    for (i = 0; i < p; i++)
    {
        int n, pkeke = 0, pfabio = 0;

        scanf("%d", &n);

        int matriz[n][n];

        for (l = 0; l < n; l++)
        {
            for (c = 0; c < n; c++)
            {
                scanf("%d", &matriz[l][c]);
            }
        }

        pkeke = conta_principal(n, matriz);
        pfabio = conta_secundaria(n, matriz);

        if (pkeke > pfabio)
        {
            printf("Partida %d:\nTio keke acumulou %d pontos\nTio fabio acumulou %d pontos\nVencedor da partida atual: Tio keke\n\n", i + 1, pkeke, pfabio);
            keke++;
        }
        else if (pfabio > pkeke)
        {
            printf("Partida %d:\nTio keke acumulou %d pontos\nTio fabio acumulou %d pontos\nVencedor da partida atual: Tio fabio\n\n", i + 1, pkeke, pfabio);
            fabio++;
        }
        else
        {
            printf("Partida %d:\nTio keke acumulou %d pontos\nTio fabio acumulou %d pontos\nHouve um empate\n\n", i + 1, pkeke, pfabio);
        }
    }

    if (keke > fabio)
    {
        printf("Resultado final do campeonato: Tio keke venceu o torneio com %d vitorias", keke);
    }
    else if (fabio > keke)
    {
        printf("Resultado final do campeonato: Tio fabio venceu o torneio com %d vitorias", fabio);
    }
    else
    {
        printf("Resultado final do campeonato: Empate");
    }

    return 0;
}