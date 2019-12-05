#include <stdio.h>
#include <string.h>
#include <strings.h>

int main()
{
    int anos;
    double valor;
    char ass[10];

    scanf("%s %d", ass, &anos);

    if (strcasecmp(ass, "Mural"))
    {
        valor = 200 * anos;
    }
    else if (strcasecmp(ass, "O"))
    {
        valor = 235 * anos;
    }
    else if (strcasecmp(ass, "Meu"))
    {
        valor = (180 - (180 / 10)) * anos;
    }
    else if (strcasecmp(ass, "Sua"))
    {
        valor = (230 - (230 / 10)) * anos;
    }

    printf("%.2lf", valor);

    return 0;
}