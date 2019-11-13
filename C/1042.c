#include <stdio.h>

int main()
{
    int idade, anoseg;

    scanf("%d", &idade);

    anoseg = idade * 31536000;

    printf("%d", anoseg);

    return 0;
}