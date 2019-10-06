#include <stdio.h>

int main()
{
	int livros, alunos;
    float quantia;

    scanf("%d%d", &livros, &alunos);

    quantia = alunos/livros;

    if (quantia <= 8)
    {
        printf("A");
    }
    else if (quantia > 8 && quantia <= 12)
    {
        printf("B");
    }
    else if (quantia > 12 && quantia <= 18)
    {
        printf("C");
    }
    else if (quantia > 18)
    {
        printf("D");
    }
    
	return 0;
}