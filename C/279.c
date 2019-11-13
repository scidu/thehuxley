#include <stdio.h>

int main()
{
	int num, horas;
    double vlrhora;

    scanf("%d%d%lf", &num, &horas, &vlrhora);

    printf("NUMBER = %d\nSALARY = R$ %.2lf", num, vlrhora*horas);
    
	return 0;
}