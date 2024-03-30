#include <stdio.h>
#include <math.h>

int main()
{
	int i = 1;
	while(pow(2, i) < 1024)
		i++;
	printf("Numero de dias ate haver 1024 unfetados: %i\n", i + 1);
	return 0;
}