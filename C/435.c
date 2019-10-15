#include <stdio.h>

int main()
{
	int tempo, total;
    int expediente = 480;

    scanf("%d", &tempo);

    total = expediente / tempo;

    printf("%d", total);

	return 0;
}