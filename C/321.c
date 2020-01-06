#include <stdio.h>
#include <string.h>

int contafruta(char frutas[])
{
    int i, qnt = 1, n = strlen(frutas);
    for (i = 0; i < n; i++)
    {
        if (frutas[i] == ' ')
        {
            qnt++;
        }
    }
    return qnt;
}

int main()
{
    int n, i;
    double total = 0, totalfruta = 0;
    double mediafruta, mediavalor;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        int qntfruta;
        double valor;
        char frutas[99999];

        scanf("%lf", &valor);
        getchar();
        gets(frutas);

        total += valor;

        qntfruta = contafruta(frutas);

        totalfruta += qntfruta;

        printf("dia %d: %d kg\n", i + 1, qntfruta);
    }

    mediafruta = totalfruta / n;
    mediavalor = total / n;

    printf("%.2lf kg por dia\nR$ %.2lf por dia", mediafruta, mediavalor);

    return 0;
}