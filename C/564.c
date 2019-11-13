#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float via,veiculo,diferenca;
    float multa = 0;
    int pontos = 0;
    scanf("%f%f",&via,&veiculo);
    diferenca = veiculo/ via ;
    if ( diferenca > 1 )
    {
        if (diferenca <= 1.2)
        {
            multa = 85.13;
            pontos = 4;
        }
        else if (diferenca <= 1.5)
        {
            multa = 127.69;
            pontos = 5;
        }
        else
        {
            multa = 574.62;
            pontos = 7;
        }
    }
    printf("%.2f\n%d\n",multa,pontos);
        
     
            
return 0;
}