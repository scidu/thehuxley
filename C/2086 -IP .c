#include <stdio.h>

int main()
{
    int n = 0, i, n2, k = 0;
    int seq[2000];

    for (i = 0; i < 1000 && n != -1; i++)
    {
        scanf("%d", &seq[i]);
    }

    scanf("%d", &n2);

    for (i = 0; i < 1000; i++)
    {
        if (seq[i] == n2)
        {
            k++;
        }
    }

    printf("%d appeared %d times", n2, k);

    return 0;
}