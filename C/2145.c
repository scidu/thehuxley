#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    char nac, ocu;
    int qnt, cal;
    scanf(" %c %c %d%d", &nac, &ocu, &qnt, &cal);
    if (nac == 'E')
    {
        if (qnt == 0 && cal == 0)
        {
            printf("Liberado");
        }
        else
            printf("Barrado");
    }
    else if (nac == 'B')
    {
        if (ocu == 'M')
        {
            printf("Liberado");
        }
        else if (ocu == 'T' || ocu == 'O')
        {
            if (qnt <= 1 && cal <= 22)
            {
                printf("Liberado");
            }
            else
            {
                printf("Barrado");
            }
        }
        else if (ocu == 'C')
        {
            if (qnt <= 2 && cal <= 38)
            {
                printf("Liberado");
            }
            else
            {
                printf("Barrado");
            }
        }
    }
    return 0;
}