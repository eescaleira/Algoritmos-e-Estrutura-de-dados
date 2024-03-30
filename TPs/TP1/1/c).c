#include <stdio.h>

int main (){
	int  n = 0, fatorial = 1;
	printf("Introduza 1 numero!\n");
	while (n <= 0)
		scanf("%i", &n);
	while(n != 1)
		fatorial *= n--;
	printf("O fatorial é: %i\n", fatorial);
	return 0;
}