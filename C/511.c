#include <stdio.h>

int main()
{
    int condutor, idade;

    scanf("%d%d", &condutor, &idade);

    if (!condutor && idade)
    {
        printf("1");
    }
    else
    {
        printf("0");        
    }

    return 0;
}