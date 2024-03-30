#include "stdio.h"

	// F = 1,8 * C + 32
int main()
{
	int C = -300;
	printf("Digite a temperatura em Celsius: ");
	while(C < -273.15)
		scanf("%i", &C);
	printf("A temperatura em Fahrenheit é: %f\n", 1.8 * C + 32);
	return 0;
}