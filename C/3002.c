#include <stdio.h>

int main()
{
    int h1, h2, h3, h4, h5, dorm;

    dorm = 1;

    scanf("%d%d%d%d%d", &h1, &h2, &h3, &h4, &h5);

    if (h1 - h2 == 1 || h1 - h3 == 1 || h1 - h4 == 1 || h1 - h5 == 1 || h2 - h1 == 1 || h2 - h3 == 1 || h2 - h4 == 1 || h2 - h5 == 1 || h3 - h1 == 1 || h3 - h2 == 1 || h3 - h4 == 1 || h3 - h5 == 1 || h4 - h1 == 1 || h4 - h2 == 1 || h4 - h3 == 1 || h4 - h5 == 1 || h5 - h1 == 1 || h5 - h2 == 1 || h5 - h3 == 1 || h5 - h4 == 1)
    {
        dorm++;
    }

    printf("%d", dorm);

    return 0;
}