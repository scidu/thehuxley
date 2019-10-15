#include <stdio.h>

int main()
{
	int in, out;

    printf("Digite um numero:\n");

    scanf("%d", &in);

    out = in % 10;

    printf("Algarismo das unidades: %d", out);
    
	return 0;
}