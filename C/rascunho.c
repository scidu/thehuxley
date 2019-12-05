#include <stdio.h>
int ehprimo(int n)
{
    int cont = 0;
    if (n <= 0 || n == 1)
    {
        return 0;
    }
    else
    {
        int i;
        for (i = 2; i <= sqrt(n + 1); i++)
        {
            if (n % i == 0)
            {
                cont++;
            }
        }
    }
    if (cont >= 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int proximoprimo(int y)
{
    int aux = 0;
    y++;
    if (ehprimo(y) == 0)
    {
        proximoprimo(y);
    }
    else
    {
        aux = y;
        return y;
    }
}
int fatorial(int z)
{
    if (z == 1 || z == 0)
    {

        return 1;
    }
    else
    {
        return z * fatorial(z - 1);
    }
}
int main()
{
    int i, k, func, cont, o;
    scanf("%d", &k);
    func = 0;
    for (i = 1; i < k; ++i)
    {
        if (i <= ehprimo(i))
            o = i;
        else
            o = proximoprimo(i);
        func += fatorial(i) / o;
        //		cont++;
    }
    printf("%d", func);
    return 0;
}