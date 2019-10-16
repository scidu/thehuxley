#include <stdio.h>

int main()
{
    int a, b, c, h, l;

    scanf("%d%d%d%d%d", &a, &b, &c, &h, &l);

    if (h >= a)
    {
        if (l >= b)
        {
            printf("S");
        }
        else if (l >= c)
        {
            printf("S");
        }
        else
        {
            printf("N");
        }
    }
    else if (h >= b)
    {
        if (l >= a)
        {
            printf("S");
        }
        else if (l >= c)
        {
            printf("S");
        }
        else
        {
            printf("N");
        }
    }
    else if (h >= c)
    {
        if (l >= a)
        {
            printf("S");
        }
        else if (l >= b)
        {
            printf("S");
        }
        else
        {
            printf("N");
        }
    }
    else
    {
        printf("N");
    }

    return 0;
}