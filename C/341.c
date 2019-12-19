#include <stdio.h>

double valor(int dif, double valor)
{
    double final, desconto;
    if (dif == 0)
    {
        if (valor <= 45)
        {
            final = valor;
        }
        
        else if (valor <= 100)
        {
            desconto = 0.5 * (0.25 * valor);
            final = valor - desconto;

            if (final < 45)
            {
                final = 45;
            }
        }
        else
        {
            desconto = 0.25 * valor;
            final = valor - desconto;

            if (final < 45)
            {
                final = 45;
            }
        }
    }
    else if (dif == 1)
    {
        if (valor <= 45)
        {
            final = valor;
        }
        else if (valor <= 100)
        {
            desconto = 0.5 * (0.20 * valor);
            final = valor - desconto;

            if (final < 45)
            {
                final = 45;
            }
        }
        else
        {
            desconto = 0.20 * valor;
            final = valor - desconto;

            if (final < 45)
            {
                final = 45;
            }
        }
    }
    else if (dif == 2)
    {
        if (valor <= 45)
        {
            final = valor;
        }
        else if (valor <= 100)
        {
            desconto = 0.5 * (0.18 * valor);
            final = valor - desconto;

            if (final < 45)
            {
                final = 45;
            }
        }
        else
        {
            desconto = 0.18 * valor;
            final = valor - desconto;

            if (final < 45)
            {
                final = 45;
            }
        }
    }
    else if (dif == 3)
    {
        if (valor <= 45)
        {
            final = valor;
        }
        else if (valor <= 100)
        {
            desconto = 0.5 * (0.15 * valor);
            final = valor - desconto;

            if (final < 45)
            {
                final = 45;
            }
        }
        else
        {
            desconto = 0.15 * valor;
            final = valor - desconto;

            if (final < 45)
            {
                final = 45;
            }
        }
    }
    else if (dif == 4)
    {
        if (valor <= 45)
        {
            final = valor;
        }
        else if (valor <= 100)
        {
            desconto = 0.5 * (0.12 * valor);
            final = valor - desconto;

            if (final < 45)
            {
                final = 45;
            }
        }
        else
        {
            desconto = 0.12 * valor;
            final = valor - desconto;

            if (final < 45)
            {
                final = 45;
            }
        }
    }
    else if (dif == 5)
    {
        if (valor <= 45)
        {
            final = valor;
        }
        else if (valor <= 100)
        {
            desconto = 0.5 * (0.10 * valor);
            final = valor - desconto;

            if (final < 45)
            {
                final = 45;
            }
        }
        else
        {
            desconto = 0.10 * valor;
            final = valor - desconto;

            if (final < 45)
            {
                final = 45;
            }
        }
    }

    return final;
}

int main()
{
    int n, i;

    scanf("%d", &n);

    int difjogo[n];
    double valorjogo[n], finaljogo[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d%lf", &difjogo[i], &valorjogo[i]);
    }

    for (i = 0; i < n; i++)
    {
        finaljogo[i] = valor(difjogo[i], valorjogo[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("Jogo[%d] = R$%.2lf\n", i, finaljogo[i]);
    }

    return 0;
}