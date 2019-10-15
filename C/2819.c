#include <stdio.h>

int main()
{
	int grafica, ia, encap, indent, structs, req1, req2, req3;
	req1 = 0;
	req2 = 0;
	req3 = 0;
    
    scanf("%d%d%d%d%d", &grafica, &ia, &encap, &indent, &structs);

    if (grafica == 1 | ia == 1)
    {
        req1 = 1;
    }
    if (encap == 1 && indent == 1)
    {
        req2 = 1;
    }
    if (structs == 1)
    {
        req3 = 1;
    }
    if (req1 == 1 && req2 == 1 && req3 == 1)
    {
        printf("Trabalho aborda Interface Grafica? (0 - Nao 1 - Sim)\nTrabalho aborda Inteligencia Artificial? (0 - Nao 1 - Sim)\nTrabalho aborda Encapsulamento? (0 - Nao 1 - Sim)\nTrabalho aborda Indentacao? (0 - Nao 1 - Sim)\nTrabalho aborda Structs? (0 - Nao 1 - Sim)\nSeu trabalho sera avaliado.");
    }
    else
    {
        printf("Trabalho aborda Interface Grafica? (0 - Nao 1 - Sim)\nTrabalho aborda Inteligencia Artificial? (0 - Nao 1 - Sim)\nTrabalho aborda Encapsulamento? (0 - Nao 1 - Sim)\nTrabalho aborda Indentacao? (0 - Nao 1 - Sim)\nTrabalho aborda Structs? (0 - Nao 1 - Sim)\nSeu trabalho nao sera avaliado, nota 0.");
    }
    
	return 0;
}