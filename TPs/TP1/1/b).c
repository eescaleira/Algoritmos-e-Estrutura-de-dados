#include <stdio.h>

int main (){
	int par_count = 0, par_some = 0
	, impar_count = 0, impar_some = 0
	, n = -1;
	printf("Introduza numeros um a um utilizando 0 como sinal para finalizar entrada d numeros!");
	while(1)
	{
		scanf("%i", &n);
		if(n == 0)
			break;
		else if(n % 2 == 0)
		{
			par_count++;
			par_some += n;
		}
		else
		{
			impar_count++;
			impar_some += n;
		}
	}	
	printf("Pares: %i\nImpares: %i\nMedia dos pares: %i\nMedia total: %i\n"
			, par_count, impar_count, (par_some / par_count) , ((par_some + impar_some) / (par_count + impar_count)));
	return 0;
}