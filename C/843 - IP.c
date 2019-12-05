#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[600];
    int i = 0, p = 0;
    gets("%c", string);

    for (i = 0; i <= 600; i++)
    {
        if (string[i] == ' ')
        {
            p++;
        }
    }

    printf("%d", p + 1);

    return 0;
}