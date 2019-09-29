#include <stdio.h>

int main()
{
	int n, r;

    scanf("%d", &n);

    r = n % 2;

    if (r == 0)
    {
        printf("O numero eh %d e ele eh par", n);
    }
    else
    {
        printf("O numero eh %d e ele eh impar", n);
    }
    
	return 0;
}