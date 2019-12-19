#include <stdio.h>
#include <math.h>

int main()
{
    long int bin, i, dec = 0;

    scanf("%ld", &bin);

    for (i = 0; bin != 0; i++)
    {
        if (bin % 10 == 1)
        {
            dec = dec + pow(2, i);
        }
        bin = bin / 10;
    }

    printf("%ld", dec);

    return 0;
}