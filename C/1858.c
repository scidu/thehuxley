#include <stdio.h>

int maior(int *arp)
{
    int i, maior = 0;

    for (i = 0; i < 6; i++)
    {
        if (arp[i] > maior)
        {
            maior = arp[i];
        }
    }

    return maior;
}

int menor(int *arp)
{
    int i, menor = 999999999;

    for (i = 0; i < 6; i++)
    {
        if (arp[i] < menor)
        {
            menor = arp[i];
        }
    }

    return menor;
}

int main()
{
    int i, meno, maio;
    int array[6];

    for (i = 0; i < 6; i++)
    {
        scanf("%d", &array[i]);
    }

    meno = menor(array);
    maio = maior(array);

    printf("%d\n%d", meno, maio);

    return 0;
}