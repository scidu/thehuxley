#include <stdio.h>

int main()
{
	double salario, novosalario;

    scanf("%lf", &salario);

    if (salario > 500)
    {
        novosalario = salario + (salario * 0.1);

        printf("%.2lf", novosalario);
    }
    else if (salario > 300 && salario <= 500)
    {
        novosalario = salario + (salario * 0.07);

        printf("%.2lf", novosalario);
 
    }
    else
    {
        novosalario = salario + (salario * 0.05);

        printf("%.2lf", novosalario);
    }
    
	return 0;
}