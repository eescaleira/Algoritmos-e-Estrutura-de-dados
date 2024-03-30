// Area = a * b e que Perímetro = 2 * (a + b)
#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	printf("Digite o valor de a: ");
	while (a <= 0)
		scanf("%i", &a);
	printf("Digite o valor de b: ");
	while (b <= 0)
		scanf("%i", &b);
	printf("A área é: %i\n", a * b);
	printf("O perímetro é: %i\n", 2 * (a + b));
	return 0;
}