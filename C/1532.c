#include <stdio.h>

int main()
{
	double qnt, total, preco;
    char comb;

    scanf("%lf %c", &qnt, &comb);

    if (comb == 'A')
    {
        if (qnt > 20)
        {
            preco = 1.90 - ((1.90 / 100) * 5);  
        }
        else
        {
            preco = 1.90 - ((1.90 / 100) * 3);
        }
        
    }
    else if (comb == 'G')
    {
        if (qnt > 20)
        {
            preco = 2.50 - ((2.50 / 100) * 6);  
        }
        else
        {
            preco = 2.50 - ((2.50 / 100) * 4);
        } 
        
    }
    else if (comb == 'D')
    {
        if (qnt > 25)
        {
            preco = 1.66 - ((1.66 / 100) * 4);  
        }
        else
        {
            preco = 1.66;
        } 
        
    }
    total = qnt * preco;

    printf("R$ %.2lf", total);
    
	return 0;
}