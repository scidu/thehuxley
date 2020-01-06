#include <stdio.h>

int main()
{
    int n, i, i2, acertos, auxfreq, freq, mfreq = 0;
    double aprov, aprovados, qnt = 0;
    int notas[10000];
    char gabarito[11];
    char resposta[11];

    scanf("%s", gabarito);
    scanf("%d", &n);

    while (n != 9999) //Compara as respostas e salva no array notas, usando n�mero do aluno como elemento.
    {
        scanf("%s", resposta);

        acertos = 0;

        for (i = 0; i < 10; i++)
        {
            if (resposta[i] == gabarito[i])
            {
                acertos++;
            }
        }

        notas[n] = acertos;

        qnt++;

        scanf("%d", &n);
    }

    for (i = 1; i <= qnt; i++) // Calcula aprova��o;
    {
        if (notas[i] >= 6)
        {
            aprovados++;
        }
    }

    aprov = (100 * aprovados) / qnt;

    for (i = 0; i <= qnt; i++)
    {
        freq = 0;
        for (i2 = 1; i2 <= qnt; i2++)
        {
            if (notas[i] == notas[i2])
            {
                freq++;
            }
        }
        if (freq > mfreq)
        {
            mfreq = freq;
            auxfreq = notas[i];
        }
    }

    for (i = 1; i <= qnt; i++)
    {
        printf("%d %d.0\n", i, notas[i]);
    }
    printf("%.1lf%%\n", aprov);
    printf("%d.0", auxfreq);

    return 0;
}