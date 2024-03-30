#include <stdio.h>

int main (){
	int biggest = 0, n = 0;
	printf("Introduza 10 numeros!\n");
	for(int i = 0 ; i < 10 ; i++)
	{
		scanf("%i", &n);
		if(n > biggest)
			biggest = n;
	}
	return 0;
}
