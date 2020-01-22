#include <stdio.h>
#include <string.h>

int main()
{
    char num1[10000], num2[10000];
    int i, n1[10000], n2[10000], res[10000], sobe = 0, cont = 0, j = 0;

    scanf("%s", num1);
    getchar();
    scanf("%s", num2);

    if (strlen(num1) == strlen(num2))
    {
        for (i = 0; i < strlen(num1); i++)
        {
            n1[i] = num1[i] - '0';
            n2[i] = num2[i] - '0';
        }
        for (i = strlen(num1) - 1; i >= 0; i--)
        {
            if (n1[i] + n2[i] + sobe < 10)
            {
                res[i] = n1[i] + n2[i] + sobe;
                sobe = 0;
            }
            else
            {
                res[i] = (n1[i] + n2[i] + sobe) % 10;
                sobe = 1;
            }
        }
        for (i = 0; i < strlen(num1); i++)
        {
            printf("%d", res[i]);
        }
    }
    else if (strlen(num1) > strlen(num2))
    {
        cont = strlen(num1);
        for (i = 0; i < strlen(num1); i++)
        {
            n1[i] = num1[i] - '0';
            if (cont == strlen(num2))
            {
                n2[i] = num2[j] - '0';
                j++;
            }
            else
            {
                cont--;
                n2[i] = 0;
            }
        }
        for (i = strlen(num1) - 1; i >= 0; i--)
        {
            if (n1[i] + n2[i] + sobe < 10)
            {
                res[i] = n1[i] + n2[i] + sobe;
                sobe = 0;
            }
            else
            {
                res[i] = (n1[i] + n2[i] + sobe) % 10;
                sobe = 1;
            }
        }
        for (i = 0; i < strlen(num1); i++)
        {
            printf("%d", res[i]);
        }
    }
    else
    {
        cont = strlen(num2);
        for (i = 0; i < strlen(num2); i++)
        {
            n2[i] = num2[i] - '0';
            if (cont == strlen(num1))
            {
                n1[i] = num1[j] - '0';
                j++;
            }
            else
            {
                cont--;
                n1[i] = 0;
            }
        }
        for (i = strlen(num2) - 1; i >= 0; i--)
        {
            if (n1[i] + n2[i] + sobe < 10)
            {
                res[i] = n1[i] + n2[i] + sobe;
                sobe = 0;
            }
            else
            {
                res[i] = (n1[i] + n2[i] + sobe) % 10;
                sobe = 1;
            }
        }
        for (i = 0; i < strlen(num2); i++)
        {
            printf("%d", res[i]);
        }
    }

    return 0;
}