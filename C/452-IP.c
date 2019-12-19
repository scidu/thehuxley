#include <stdio.h>
#include <string.h>

int main()
{
    char ass[10];
    char j1[10], j2[10], r1[10], r2[10];
    strcpy(j1, "Mural");
    strcpy(j2, "O Coreto");
    strcpy(r1, "Meu Lar");
    strcpy(r2, "Sua Mesa");

    int tempo;
    double final;

    fgets(ass, 10, stdin);

    scanf("%d", &tempo);

    if (strcmp(ass, j1) == 0)
    {
        final = tempo * 200;
    }
    else if (strcmp(ass, j2) == 0)
    {
        final = tempo * 235;
    }
    else if (strcmp(ass, r1) == 0)
    {
        final = (tempo * 180) * 0.9;
    }
    else if (strcmp(ass, r2) == 0)
    {
        final = (tempo * 230) * 0.9;
    }

    printf("%.2lf", final);

    return 0;
}