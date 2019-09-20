#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    char s;
    scanf(" %c", &s);
    if(s == 'F')
    {
        printf("Feminino");
    }
    else if(s == 'M')
    {
        printf("Masculino");
    }
    else
        printf("Sexo nao definido");
	return 0;
}