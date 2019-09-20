#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    int ano;
    scanf("%d", &ano);
    if ( ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
    printf("Bissexto");
    else
    {
        printf("Nao bissexto");
    }
	return 0;
}