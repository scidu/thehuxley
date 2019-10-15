#include <stdio.h>

int main() 
{
    int a, b, c;
    float media;
    
    scanf("%d%d%d", &a, &b, &c);

    media = (a + b + c) / 3;

    if (media < 3)
    {
        printf("reprovado\n");
    }
    else if (media >= 3 && media < 7)
    {
        printf("prova final\n");
    }
    else if (media >= 7)
    {
        printf("aprovado\n");
    }

	return 0;
}