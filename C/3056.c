#include <stdio.h>
#include <stdbool.h>

bool right_verification(int heights[], int position, int n)
{
    int i = position;
    for (i = position; i < n - 1; i++)
    {
        if (heights[i + 1] >= heights[i])
            return false;
    }
    return true;
}

bool left_verification(int heights[], int position)
{
    int i;
    for (i = position; i > 0; i--)
    {
        if (heights[i - 1] >= heights[i])
            return false;
    }
    return true;
}

int main()
{
    int n, i, left_size = 0, right_size = 0;
    scanf("%d", &n);
    int heights[n], left[n], right[n];

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &heights[i]);
    }

    for (i = 0; i < n; ++i)
    {
        if (i > 0 && i < n - 1)
        {
            if (left_verification(heights, i))
            {
                left[left_size] = i;
                left_size++;
            }
            if (right_verification(heights, i, n))
            {
                right[right_size] = i;
                right_size++;
            }
        }
    }
    if (left_size > 0)
    {
        printf("Desabamento a esquerda: ");
        for (i = 0; i < left_size; ++i)
        {
            printf("%d ", left[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Nao ocorreu nenhum desabamento a esquerda\n");
    }
    if (right_size > 0)
    {
        printf("Desabamento a direita: ");
        for (i = 0; i < right_size; ++i)
        {
            printf("%d ", right[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Nao ocorreu nenhum desabamento a direita\n");
    }

    return 0;
}