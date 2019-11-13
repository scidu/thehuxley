#include <stdio.h>

int main()
{
    double a, b, c, media;

    scanf("%lf%lf%lf", &a, &b, &c);

    media = (a + b + c) / 3;

    if (media >= 0 && media <= 40)
    {
        printf("A media do aluno foi %.2lf e ele foi REPROVADO", media);
    }
    else if (media > 40 && media < 70)
    {
        printf("A media do aluno foi %.2lf e ele foi FINAL", media);
    }
    else if (media >= 70 && media <= 100)
    {
        printf("A media do aluno foi %.2lf e ele foi APROVADO", media);
    }
    else
    {
        printf("Media invalida");
    }

    return 0;
}