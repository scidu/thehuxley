#include <stdio.h>

int main()
{
    int seq[100];
    int i, atual, maior = 0;

    for (i = 0; i < 100; i++)
    {
        scanf("%d", &atual);
        if (atual == 0)
        {
            break;
        }
        else if (atual > maior)
        {
            maior = atual;
        }
    }

    printf("%d", maior);

    return 0;
}