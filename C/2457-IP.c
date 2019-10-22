#include <stdio.h>

int main()
{
	int p, n;
    p = 1;

    scanf("%d", &n);

    while (p != n)
    {
        printf("%d ", p);
        p++;
    }
    
	return 0;
}