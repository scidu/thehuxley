#include <stdio.h>

int main()
{
	int estudante, idoso;

    scanf("%d\n%d", &estudante, &idoso);

    if (estudante == 1 | idoso == 1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    
	return 0;
}