#include <stdio.h>

int main()
{
	int qnt, x, y, aux, i1, i2, m;
	char direcao[100001];
	char direita[] = "D";
	char cima[] = "C";

	x = 0;
	y = 0;
	m = 0;

	scanf("%d", &qnt);
	for (i1 = 0; i1 < qnt; i1++)
	{
		scanf("%s", &direcao[i1]);
	}
	for (i2 = 0; i2 < qnt; i2++)
	{
		if (direcao[i2] == direita[0])
		{
			aux = x;
			x++;
			if (x == y)
			{
				if (direcao[i2 + 1] == direita[0])
				{
					if ((aux > y) && (y > (x + 1)))
					{
						m++;
					}
					else if ((aux < y) && ((x + 1) > y))
					{
						m++;
					}
				}
				else if (direcao[i2 + 1] == cima[0])
				{
					if ((aux > y) && ((y + 1) > x))
					{
						m++;
					}
					else if ((aux < y) && (x > (y + 1)))
					{
						m++;
					}
				}
			}
		}
		else if (direcao[i2] == cima[0])
		{
			aux = y;
			y++;
			if (x == y)
			{
				if (direcao[i2 + 1] == direita[0])
				{
					if ((aux > x) && ((x + 1) > y))
					{
						m++;
					}
					else if ((aux < x) && (y > x + 1))
					{
						m++;
					}
				}
				else if (direcao[i2 + 1] == cima[0])
				{
					if ((aux > x) && ((y + 1) < x))
					{
						m++;
					}
					else if ((aux < x) && (x < (y + 1)))
					{
						m++;
					}
				}
			}
		}
	}

	printf("%d\n", m);

	return 0;
}