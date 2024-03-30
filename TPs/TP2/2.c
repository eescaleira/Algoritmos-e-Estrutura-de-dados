#include <stdio.h>

int main()
{
	int N = 0;
	printf("Digite um número positivo: ");
	while (N <= 0)
		scanf("%i", &N);
	for(int i = 1; i <= N; i++)
		printf("%i x %i = %i\n", i, N, i * N);
	return 0;
}

// ver complexide de algoritmo

// O(n)