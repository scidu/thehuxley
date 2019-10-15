#include <stdio.h>

int main()
{
	int canal;

    printf("Digite um numero de um canal de tv:\n");

    scanf("%d", &canal);

    if (canal == 2)
    {
        printf("SBT");
    }
    else if (canal == 4)
    {
        printf("BAND");
    }
    else if (canal == 6)
    {
        printf("REDETV!");
    }
    else if (canal == 9)
    {
        printf("RECORD");
    }
    else if (canal == 13)
    {
        printf("GLOBO");
    }
    else
    {
        printf("Canal Invalido");
    }
    
	return 0;
}