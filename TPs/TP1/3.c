#include <stdio.h>

int main(){
	int n, divisores = 0;
	printf("Introduza um número: ");
	while (n <= 0)
		scanf("%i", &n);
	for (int i = 1; i <= n/2; i++)
		if (n % i == 0)
			divisores++;
	printf("O número %i tem %i divisores.\n", n, divisores);
	return 0;
}