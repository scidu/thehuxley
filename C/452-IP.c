#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char ass[10], assinatura[10];
    int anos;
    double valor;

    gets(ass);
    scanf("%d", &anos);
    assinatura[10] = toupper(ass[10]);

    if (strcmp(assinatura,"MURAL") == 0)
    {
        valor = anos * 200;
    }
    else if (strcmp(assinatura,"O CORETO") == 0)
    {
        valor = anos * 235;
    }
    else if (strcmp(assinatura,"MEU LAR") == 0)
    {
        valor = anos * 162;
    }
    else if (strcmp(assinatura,"SUA MESA") == 0)
    {
        valor = anos * 207;
    }
    printf("%.2lf\n", valor);

	return 0;
}