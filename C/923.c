#include <stdio.h>
#include <string.h>

int main()
{
    char p1[6], p2[6], p3[6], p4[6], p5[6];
    int q;
    q = 0;

    printf("Telefonou para a vitima?\n");
    scanf("%s", p1);
    if (strcmp(p1,"True") == 0)
    {
        q++;
    }

    printf("Esteve no local do crime?\n");
    scanf("%s", p2);
    if (strcmp(p2,"True") == 0)
    {
        q++;
    }

    printf("Mora perto da vitima?\n");
    scanf("%s", p3);
    if (strcmp(p3,"True") == 0)
    {
        q++;
    }

    printf("Devia para a vitima?\n");
    scanf("%s", p4);
    if (strcmp(p4,"True") == 0)
    {
        q++;
    }

    printf("Ja trabalhou com a vitima?\n");
    scanf("%s", p5);
    if (strcmp(p5,"True") == 0)
    {
        q++;
    }

    if (q == 2)
    {
        printf("Suspeita");
    }
    else if (q == 3 | q == 4)
    {
        printf("Cumplice");
    }
    else if (q == 5)
    {
        printf("Assassino");
    }
    else
    {
        printf("Inocente");
    }

    return 0;
}