#include <stdio.h>

int main()
{
	float f, c;

    printf("Digite uma temperatura na escala Fahrenheit:\n");
    scanf("%f", &f);

    c = (f-32)/1.8;

    printf("Temperatura em Celsius: %.1f", c);

	return 0;
}