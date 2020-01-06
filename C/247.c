#include <stdio.h>
#include <string.h>

int main()
{
    char string[256];
    int i, t;

    fgets(string, 256, stdin);

    t = strlen(string);

    for (i = t; i >= 0; i--)
    {
        printf("%c", string[i]);
    }

    return 0;
}