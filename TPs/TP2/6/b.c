#include <stdio.h>
#include <math.h>

int calc_days(int dias)
{
	if(dias < 0)
		return 0;
	return (pow(2, dias) + calc_days(dias - 1));
}


int main()
{
	int dias = 0;
	printf("Insira o numero de dias: ");
	while(dias < 1)
		scanf("%i", &dias);
	printf("Numero de infetados no dia %i = %i", dias, calc_days(dias));
	return 0;
}