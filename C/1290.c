#include <stdio.h>

int main()
{
    int n, t;

    scanf("%d%d", &n, &t);

    while (t > 0)
    {
        n = n + 3;
        t--;

        if (t > 0)
        {
            n = n + (n % 5);
            t--;
        }
    }

    printf("%d", n);

    return 0;
}