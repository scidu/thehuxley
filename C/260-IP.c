#include <stdio.h>

int main()
{
	int n, d, dc;
    dc = 0;
    
    scanf("%d", &n);
    while (n != -1)
    {
        d = 2;
        while (d < n && !dc)
        {
        if (n % d == 0)
            {
                dc = 1;
            }
        else
            {
                d++;
            }
        }
    if (dc || n <= 1)
    {
        printf("0\n");
    }
    else
    {
        printf("1\n");
    }
    scanf("%d", &n);
    }
return 0;
}