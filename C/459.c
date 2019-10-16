#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    int idade;
    char porte;

    scanf("%d %c", &idade, &porte);

    if (idade == 1)
    {
        if (porte == 'p' || porte == 'P')
        {
            printf("5");
        }
        else if (porte == 'm' || porte == 'M')
        {
            printf("6");
        }
        else if (porte == 'g' || porte == 'G')
        {
            printf("8");
        }
    }
    else if (idade == 3)
    {
        if (porte == 'p' || porte == 'P')
        {
            printf("21");
        }
        else if (porte == 'm' || porte == 'M')
        {
            printf("19");
        }
        else if (porte == 'g' || porte == 'G')
        {
            printf("23");
        }
    }
    else if (idade == 5)
    {
        if (porte == 'p' || porte == 'P')
        {
            printf("26");
        }
        else if (porte == 'm' || porte == 'M')
        {
            printf("32");
        }
        else if (porte == 'g' || porte == 'G')
        {
            printf("38");
        }
    }

    return 0;
}