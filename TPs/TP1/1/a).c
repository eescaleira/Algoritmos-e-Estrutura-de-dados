#include "stdio.h"

int soma(int n){
	int soma = 0;
	for (int i = 1; n >= i; i++)
		soma += i;
	return soma;
}

int main()
{
	printf("Introduza um numero maior que 0!");
	int N = 0;
	while(N <=0)
		scanf("%i", &N);
	printf("Soma de 1 a %i = %i", N, soma(N));
	return 0;
}