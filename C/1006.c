#include <stdio.h>

int main()
{
	int n, i;
    scanf("%d", &n);
    while (n)
    {
        i = 1;
        while ((i*i - (i-1)*(i-1)) != n)
        {
            i++;
        }
        printf("%d - %d\n", i*i, (i-1)*(i-1));
        scanf("%d", &n);

    }
	return 0;
}