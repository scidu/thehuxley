#include <stdio.h>

int verifataque(int matriz[3][3])
{
    int i, j, c;
    c = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matriz[i][j] == 1)
            {
                c++;
            }
            if (matriz[i][j] != 0 && matriz[i][j] != 1)
            {
                return -1;
            }
        }
    }

    if (c == 3)
    {
        if (matriz[0][0] == 1 && matriz[1][1] == 1 && matriz[2][2] == 1)
        {
            return 1;
        }
        else if (matriz[0][2] == 1 && matriz[1][1] == 1 && matriz[2][0] == 1)
        {
            return 2;
        }
    }

    return -1;
}

int main()
{
    int vluke, vvader, n, validalu, validavader;
    int i, j;
    int golpeluke[3][3];
    int golpevader[3][3];

    scanf("%d %d", &vluke, &vvader);
    n = 10;

    while (n--)
    {

        if (vluke <= 0 && vvader <= 0)
        {
            printf("Houve empate.\n");
            return 0;
        }

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%d", &golpeluke[i][j]);
            }
        }

        validalu = verifataque(golpeluke);

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%d", &golpevader[i][j]);
            }
        }

        validavader = verifataque(golpevader);

        if (validalu == -1 || validavader == -1)
        {
            if (validalu == -1)
            {
                if (validavader == 1 || validavader == 2)
                {
                    vluke = vluke - 15;
                }
            }

            if (validavader == -1)
            {
                if (validalu == 1 || validalu == 2)
                {
                    vvader = vvader - 15;
                }
            }
            if (vluke <= 0 && vvader > 0)
            {
                printf("Darth Vader venceu.\n");
                return 0;
            }

            if (vvader <= 0 && vluke > 0)
            {
                printf("Luke Skywalker venceu.\n");
                return 0;
            }
        }

        else if (validalu == validavader)
        {
            vvader = vvader - 15;
            vluke = vluke - 15;

            if (vluke <= 0 && vvader > 0)
            {
                printf("Darth Vader venceu.\n");
                return 0;
            }

            if (vvader <= 0 && vluke > 0)
            {
                printf("Luke Skywalker venceu.\n");
                return 0;
            }
        }
    }

    printf("Houve empate.\n");

    return 0;
}