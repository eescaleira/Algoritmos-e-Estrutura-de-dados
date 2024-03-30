#include <stdio.h>

// Implemente um programa para reproduzir a progressão de Fibonacci, conforme
// o exemplo abaixo. Considere um número N lido pelo utilizador.
// F(0)=1
// F(1)=1
// F(n)=F(n-1)+F(n-2)
// Recorrendo a uma contagem de instruções, realize a análise de complexidade.

int main()
{
	int N = -1;
	printf("Digite um número positivo: ");
	while (N < 0)
		scanf("%i", &N);
	int a = 1, b = 1, c = 0;
	if(N == 0 || N == 1)
	{
		printf("F(%i) = 1\n", N);
		return 0;
	}
	printf("F(2) = 1\n");
	for(long long int i = 3 ; i <= N ; i++)
	{
		c = a + b;
		printf("F(%i) = F(%i) + F(%i) = %i + %i = %i\n", i, i - 1, i - 2, a, b, c);
		a = b;
		b = c;
	}
	// printf("F(%i) = F(%i) + F(%i) = %i\n", i, i - 1, i - 2, a + b);
	return 0;
}