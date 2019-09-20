#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int a, i, b;
    scanf("%d%d", &a, &i);
    b = 0;
    if(a>=150 && i>=12)
    {
      b++;
    }
    if(a>=140 && i>=14)
    {
      b++;
    }
    if(a>=170 || i>=16)
    {
      b++;
    }
    printf("%d", b);
	return 0;
}