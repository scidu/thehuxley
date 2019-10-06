#include <stdio.h>

int main()
{
    int ig, ia, encap, ind, str, q;
    q = 0;

    scanf("%d %d %d %d %d", &ig, &ia, &encap, &ind, &str);

    if ((ig | ia) == 1)
    {
        q++;
    }
    if ((encap && ind) == 1)
    {
        q++;
    }
    if (str == 1)
    {
        q++;
    }

    if (q == 3)
    {
        printf("AVALIADO");
    }
    else
    {
        printf("0");
    }

    return 0;
}