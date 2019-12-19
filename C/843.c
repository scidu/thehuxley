#include <stdio.h>

int main()
{
    char string[500] = {'.'};
    int i, qnt = 1;

    fgets(string, 500, stdin);

    for (i = 0; i < 500; i++)
    {
        if (string[i] == string[i + 1])
        {
            i++;
        }

        else if (string[i] == ' ' && string[i + 1] == ' ')
        {
            i++;
        }

        else if (string[i] == ' ' || string[i] == '\n')
        {
            qnt++;
        }
    }

    printf("%d", qnt);

    return 0;
}
