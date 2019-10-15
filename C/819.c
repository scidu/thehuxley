#include <stdio.h>
#include <string.h>

int main()
{
	char amigo[6], destino[6];

    scanf("%s%s", amigo, destino);

    if ((strcmp(amigo,"norte") == 0 && strcmp(destino,"norte") == 0) || (strcmp(amigo,"sul") == 0 && strcmp(destino,"sul") == 0) || (strcmp(amigo,"leste") == 0 && strcmp(destino,"leste") == 0) || (strcmp(amigo,"oeste") == 0 && strcmp(destino,"oeste") == 0))
    {
        printf("0");
    }
    else if ((strcmp(amigo,"norte") == 0 && strcmp(destino,"sul") == 0) || (strcmp(amigo,"sul") == 0 && strcmp(destino,"norte") == 0) || (strcmp(amigo,"leste") == 0 && strcmp(destino,"oeste") == 0) || (strcmp(amigo,"oeste") == 0 && strcmp(destino,"leste") == 0))
    {
        printf("180");
    }
    else
    {
        printf("90");
    }
    
	return 0;
}