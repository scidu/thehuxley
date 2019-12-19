#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/*
	 * s -> número de individuos
	 * t -> número de testemunhas
	 * maior -> vai salvar a maior pontuação
	 * b -> salva o inicio dos intervalos com maior pontuação
	 * e -> salva o fim dos intervalos com maior pontuação
	 * msb -> salva o inicio da maior sequencia com a maior pontuação
	 * mse -> salva o final da maior sequencia com a maior pontuação
	 * ms  -> salva o tamanho da maior sequencia
	 * sus -> array que salva a pontuação de suspeita dos individuos
	*/
	int s, t, i, maior = -99999999, b, e, msb, mse, ms = -99999999;
	scanf("%d %d", &s, &t);
	int sus[s];
	memset(sus, 0, sizeof(sus)); // zera todas as posições do array sus
	for (i = 0; i < t; i++)
	{
		int l, r;
		scanf("%d %d", &l, &r); // lê o intervalo
		while (l <= r)
		{
			sus[l]++; // soma a pontuação daquele individuo
			l++;
		}
	}
	for (i = 0; i < s; i++)
	{
		if (maior < sus[i])
		{
			maior = sus[i]; // pega quem é a maior pontuação
		}
		printf("%d%c", sus[i], i + 1 == s ? '\n' : ' '); // imprime a pontuação do suspeito e um caracter, se for a ultima posição exibe \n senão, espaço
	}
	printf("%d\n", maior); // exibe a maior pontuação
	for (i = 0; i < s; i++)
	{ // for para encontrar os intervalos com a maior pontuação de supeita
		if (sus[i] == maior)
		{		   // se eu encontrei um valor com a maior pontuação de suspeita
			b = i; // marque o inicio
			while (i < s && sus[i] == maior)
				i++;   // caminhe pelo array até encontrar o fim
			e = i - 1; // salve o fim do intervalo
			if (i - b > ms)
			{				// se esse intervalo é maior que o maior intervalo até aqui
				ms = i - b; // salva o novo maior intervalo
				msb = b;	// o novo começo do maior intervalo
				mse = e;	// o novo final do maior intervalo
			}
			printf("%d %d\n", b, e); // exibe o inicio e o fim do intervalo atual
		}
	}
	printf("maior sequencia: %d\n", ms); // exibe a maior sequencia
	printf("comeca em: %d\n", msb);		 // exibe o inicio da maior sequencia
	printf("termina em: %d\n", mse);	 // exibe o final da maior sequencia
	return 0;
}