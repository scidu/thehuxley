#include <stdio.h>

int main()
{
	int input, output, d, u;

    scanf("%d", &input);

    d = input / 10;
    u = (input % 10) * 10;
    output = d + u;

    printf("%d", output);
    
	return 0;
}