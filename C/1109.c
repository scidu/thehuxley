#include <stdio.h>

int main()
{
    int programas, linhas, qprogramas = 0, qlinhas = 0, mlinhas = 0, dia, i;

    for (i = 1; i <= 7; i++)
    {
        scanf("%d%d", &programas, &linhas);

        if (programas >= 5)
        {
            qprogramas++;
        }

        if (linhas >= 100)
        {
            qlinhas++;
        }

        if (linhas > mlinhas)
        {
            mlinhas = linhas;
            dia = i;
        }
    }

    if (dia == 1)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: DOMINGO", qprogramas, qlinhas);
    }
    else if (dia == 2)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: SEGUNDA", qprogramas, qlinhas);
    }
    else if (dia == 3)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: TERCA", qprogramas, qlinhas);
    }
    else if (dia == 4)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: QUARTA", qprogramas, qlinhas);
    }
    else if (dia == 5)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: QUINTA", qprogramas, qlinhas);
    }
    else if (dia == 6)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: SEXTA", qprogramas, qlinhas);
    }
    else if (dia == 7)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: SABADO", qprogramas, qlinhas);
    }

    return 0;
}