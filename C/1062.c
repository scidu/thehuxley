#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float a;
    scanf("%f", &a);
    if (a >= 1.0 && a < 7.0)
    {
        printf("Acida");
    }
    else if (a > 7.0 && a <= 14.0)
    {
        printf("Basica");
    }
    else
    {
        printf("Neutra");
    }
    return 0;
}