#include <stdio.h>

int main()
{
	double salario, salarionovo, aumentop, aumento;

    scanf("%lf", &salario);

    if (salario <= 280)
    {
        aumentop = 20;

    }
    else if (salario > 280 && salario <=  700)
    {
        aumentop = 15;
    }
    else if (salario > 700 && salario < 1500)
    {
        aumentop = 10;
    }
    else
    {
        aumentop = 5;
    }

    aumento = (salario / 100) * aumentop;
    salarionovo = salario + aumento;

    printf("%.2lf\n%.lf\n%.2lf\n%.2lf\n", salario, aumentop, aumento, salarionovo);

	return 0;
}