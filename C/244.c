#include <stdio.h>

int main()
{
    int i, qnt = 0;
    char string[50], carac;

    scanf("%s %c", string, &carac);

    for (i = 0; i < 50; i++)
    {
        if (string[i] == carac)
        {
            qnt++;
        }
    }

    printf("%d", qnt);

    return 0;
}