#include <stdio.h>

int main()
{
	int N = 0;
	while (N <= 0)
	{	
		printf("Digite um número positivo: ");
		scanf("%i", &N);
	}
	for(int i = 1 ; i <= N; i++)
	{
		for(int  n = 1; n <= i ; n++)
			printf("*");
		printf("\n");
	}
	return 0;
}