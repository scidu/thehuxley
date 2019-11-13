#include <stdio.h>

int contapar(int n, int cont)
{
    int quo, res, resu;

    quo = n / 10;
    res = n % 10;

    if (res % 2 == 0)
    {
        cont++;
    }
    if (quo != 0)
    {
        contapar(quo, cont);
    }
    else
    {
        return cont;
    }
     
}

int main()
{
    int n, pares;

    scanf("%d", &n);

    pares = contapar(n, 0);

    printf("%d", pares);

    return 0;
}