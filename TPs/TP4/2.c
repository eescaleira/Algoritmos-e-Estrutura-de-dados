#include <stdio.h>

int find_with_binary_search(int V[], int L, int R, int F){
	int N = L + (R - L) / 2;
	printf("L: %i, R: %i, N: %i, V[N]: %i\n", L, R, N, V[N]);
	if(V[N] == F){
		return N;
	}
	else if (R <= L)
		return -1;
	else if(V[N] > F){
		return find_with_binary_search(V, L , N -1 , F);
	}
	else if(V[N] < F){
		return find_with_binary_search(V, N + 1, R, F);
	}
}
int main(){
	int F, N = 100;
	int  V[] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100
	 , 110, 120, 130, 140, 150, 160, 170, 180, 190
	 , 200, 210, 220, 230, 240, 250, 260, 270, 280
	 , 290, 300, 310, 320, 330, 340, 350, 360, 370
	 , 380, 390, 400, 410, 420, 430, 440, 450, 460
	 , 470, 480, 490, 500, 510, 520, 530, 540, 550
	 , 560, 570, 580, 590, 600, 610, 620, 630, 640
	 , 650, 660, 670, 680, 690, 700, 710, 720, 730
	 , 740, 750, 760, 770, 780, 790, 800, 810, 820
	 , 830, 840, 850, 860, 870, 880, 890, 900, 910
	 , 920, 930, 940, 950, 960, 970, 980, 990};
	printf("Introduza valor a procurar no array!");
	scanf("%i", &F);
	printf("%i", find_with_binary_search(V, 0, N, F));
	return 0;
}