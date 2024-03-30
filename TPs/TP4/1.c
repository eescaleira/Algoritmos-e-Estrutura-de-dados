#include<stdio.h>
#include"complexidade.h"

int main(){
	int N = 100, V[N], f;

	preenche_vetor_random(V, N);
	print_vetor(V, N);
	printf("Introduza valor a procurar no array!");
	scanf("%i", &f);
	for(int i = 0; i < N; i++){
		if(V[i] == f){
			printf("O valor %i foi encontrado na posição %i do array!", f, i);
			return 0;
		}
	}
	printf("O valor %i não foi encontrado no array!", f);
}